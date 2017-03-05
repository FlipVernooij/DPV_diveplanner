#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gassupply.h"
#include "gasvolume.h"

#include <math.h>
#include <vector>

void MainWindow::set_warning_text_style(QLabel *label, int value, int max_value){
    QString warning = "font-weight: bold; color: red";
    QString notice = "font-weight: bold; color: orange";
    double percentage = max_value * 0.8;
    if(value>max_value){
        label->setStyleSheet(warning);
    }else if (value > percentage){
        label->setStyleSheet(notice);
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->text_disclaimer->setOpenExternalLinks(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    if(index == 1){
        std::vector<QString> warnings;

        GasSupply supply;
        // Settings
        int scr = ui->input_scr->value();
        int scr_stress = ui->input_scr_stress->value();
        int scr_dpv = ui->input_dpv_scr->value();
        int scr_dpv_stress = ui->input_dpv_scr_stress->value();
        int dpv_total_burntime = ui->input_dpv_total_burntime->value();

        // Speeds
        int speed_swim = ui->input_swim_speed->value();
        int speed_dpv_tow = ui->input_dpv_tow->value();
        int speed_dpv = ui->input_dpv_speed->value();

        // Dive details
        int avg_depth = ui->input_avg_depth->value();
        int dpv_trigger_in = ui->input_dpv_triggertime->value();

        // Doubles
        int doubles_cylindersize = ui->input_cylindersize_doubles->value();
        int doubles_bars = ui->input_pressure_doubles->value();
        int doubles_penetration_bars = ui->input_usable_doubles->value();

        // stages
        int stages_cylindersize = ui->input_cylindersize_stages->value();
        int stages_bars = ui->input_pressure_stages->value();
        int stages_penetration_bars = ui->input_usable_stages->value();
        int stages_amount = ui->input_amount_stages->value();


        // Create gassupply so we can calculate
        supply.set_doubles(
                            doubles_cylindersize,
                            doubles_bars,
                            doubles_penetration_bars);

        for(int i=0; i<stages_amount; i++){
            supply.add_stage(stages_cylindersize, stages_bars, stages_penetration_bars);
        }
        int liters_stages = supply.get_liters_in_stages();
        int liters_doubles = supply.get_liters_in_doubles();
        int liters_total = supply.get_total_liters();
        int total_penetration_liters = supply.get_total_penetration_liters();
        int total_reserved_liters = supply.get_total_reserved_liters();
        int current_penetration_liters = total_penetration_liters;

        // properties to be set in results page:

        int total_dive_time = 0;
        int dpv_total_trigger_time = 0;
        int dpv_penetration_meters = 0;
        int swim_total_time = 0;
        int swim_penetration_meters = 0;
        int total_penetration_meters = 0;
        int reserve_gas_minutes = 0;
        int bars_left_in_doubles = supply.get_reserved_bars_in_doubles();

        int required_in_doubles_for_tow = -1;
        int required_in_doubles_for_swim = -1;
        int required_in_doubles_for_dpv_no_stages = -1;
        int required_in_doubles_for_tow_no_stages = -1;
        int required_in_doubles_for_swim_no_stages = -1;
        int required_in_doubles_for_dpv_half_stages = -1;

        int stress_swim_bars = 0;
        int stress_dpv_swim_bars = 0;
        int stress_dpv_tow_bars = 0;
        int stress_dpv_bars = 0;

        int tmp_int = 0;
        // Check dpv trigger time (80% of total burntime / 3)
        // so total_burntime = 200, then 160/3 = 50 minutes in.
        int dpv_max_in = static_cast<int>(floor(dpv_total_burntime*0.08/3)*10);
        if(dpv_trigger_in > dpv_max_in){
            dpv_trigger_in = dpv_max_in;
            warnings.push_back("Dpv triggertime can not be bigger that 3/2 of 80% or total burntime.");
        }

        // Dpv dive time/disctance and gas.
        if(dpv_trigger_in > 0){
            tmp_int = GasVolume::minute_2_liters(dpv_trigger_in, avg_depth, scr_dpv);
            if(tmp_int > current_penetration_liters){
               tmp_int = current_penetration_liters;
               dpv_trigger_in = GasVolume::liters_2_minutes(tmp_int, avg_depth, scr_dpv);
               warnings.push_back("Dpv triggertime in is bigger than estimated gas consumtion.");
            }
            dpv_total_trigger_time = dpv_trigger_in * 2;
            dpv_penetration_meters = GasVolume::liters_2_meters(tmp_int, avg_depth, scr_dpv, speed_dpv);
            current_penetration_liters -= tmp_int;
            tmp_int = 0;

            stress_dpv_swim_bars = GasVolume::liters_2_bars(GasVolume::meters_2_liters(dpv_penetration_meters, avg_depth, scr_stress, speed_swim), doubles_cylindersize*2);
            stress_dpv_tow_bars = GasVolume::liters_2_bars(GasVolume::meters_2_liters(dpv_penetration_meters, avg_depth, scr_dpv_stress, speed_dpv_tow), doubles_cylindersize*2);
            stress_dpv_bars = GasVolume::liters_2_bars(GasVolume::meters_2_liters(dpv_penetration_meters, avg_depth, scr_dpv_stress, speed_dpv), doubles_cylindersize*2);

        }

        swim_penetration_meters = GasVolume::liters_2_meters(current_penetration_liters, avg_depth, scr, speed_swim);
        swim_total_time = GasVolume::liters_2_minutes(current_penetration_liters, avg_depth, scr) * 2;
        current_penetration_liters = 0;

        total_dive_time = dpv_total_trigger_time + swim_total_time;
        total_penetration_meters = swim_penetration_meters + dpv_penetration_meters;

        reserve_gas_minutes = GasVolume::liters_2_minutes(total_reserved_liters, avg_depth, scr_stress);


        stress_swim_bars = GasVolume::liters_2_bars(GasVolume::meters_2_liters(swim_penetration_meters, avg_depth, scr_stress, speed_swim), doubles_cylindersize*2);


        // Calculate the amount of gas to substract from required gas in doubles when using stages
        int total_bars_left_in_stages = GasVolume::liters_2_bars(((stages_bars - stages_penetration_bars)*stages_amount)*stages_cylindersize, doubles_cylindersize*2);


        if(dpv_trigger_in > 0){
            required_in_doubles_for_tow = stress_swim_bars + stress_dpv_tow_bars - total_bars_left_in_stages;
            required_in_doubles_for_dpv_half_stages = stress_swim_bars + stress_dpv_bars - (total_bars_left_in_stages/2);
            required_in_doubles_for_dpv_no_stages = stress_swim_bars + stress_dpv_bars;
            required_in_doubles_for_tow_no_stages = stress_swim_bars + stress_dpv_tow_bars;;
            required_in_doubles_for_swim_no_stages = stress_swim_bars + stress_dpv_swim_bars;
            required_in_doubles_for_swim = stress_swim_bars + stress_dpv_swim_bars - total_bars_left_in_stages;
        }else{
            required_in_doubles_for_tow = stress_swim_bars  - total_bars_left_in_stages;
            required_in_doubles_for_dpv_half_stages = stress_swim_bars - (total_bars_left_in_stages/2);
            required_in_doubles_for_dpv_no_stages = stress_swim_bars;
            required_in_doubles_for_tow_no_stages = stress_swim_bars;
            required_in_doubles_for_swim_no_stages = stress_swim_bars;
            required_in_doubles_for_swim = stress_swim_bars - total_bars_left_in_stages;
        }

        ui->label_divetime_value->setNum(total_dive_time);
        ui->label_triggertime_value->setNum(dpv_total_trigger_time);
        ui->label_dpv_penetration_value->setNum(dpv_penetration_meters);
        ui->label_swim_penetration_value->setNum(swim_penetration_meters);
        ui->label_gasreserve_minutes_value->setNum(reserve_gas_minutes);
        ui->label_gas_left_in_doubles_value->setNum(bars_left_in_doubles);

        this->set_warning_text_style(ui->label_tow_value, required_in_doubles_for_tow, bars_left_in_doubles);
        ui->label_tow_value->setNum((required_in_doubles_for_tow>0?required_in_doubles_for_tow:0));

        this->set_warning_text_style(ui->label_swim_value, required_in_doubles_for_swim, bars_left_in_doubles);
        ui->label_swim_value->setNum((required_in_doubles_for_swim>0?required_in_doubles_for_swim:0));

        this->set_warning_text_style(ui->label_tow_no_stages_value, required_in_doubles_for_tow_no_stages, bars_left_in_doubles);
        ui->label_tow_no_stages_value->setNum((required_in_doubles_for_tow_no_stages>0?required_in_doubles_for_tow_no_stages:0));

        this->set_warning_text_style(ui->label_oog_value, required_in_doubles_for_dpv_no_stages, bars_left_in_doubles);
        ui->label_oog_value->setNum((required_in_doubles_for_dpv_no_stages>0?required_in_doubles_for_dpv_no_stages:0));

        this->set_warning_text_style(ui->label_no_dpv_half_stages_value, required_in_doubles_for_dpv_half_stages, bars_left_in_doubles);
        ui->label_no_dpv_half_stages_value->setNum(required_in_doubles_for_dpv_half_stages);

        this->set_warning_text_style(ui->label_no_dpv_no_stages_value, required_in_doubles_for_swim_no_stages, bars_left_in_doubles);
        ui->label_no_dpv_no_stages_value->setNum((required_in_doubles_for_swim_no_stages>0?required_in_doubles_for_swim_no_stages:0));

       
    }
}

void MainWindow::on_input_dpv_in_type_currentIndexChanged(int index)
{
    if(index == 0){
        ui->input_dpv_triggertime->setEnabled(true);
        ui->label_dpv_triggertime->setEnabled(true);
        ui->label_dpv_triggertime_suffix->setEnabled(true);

        ui->label_dpv_triggerdistance->setEnabled(false);
        ui->input_dpv_triggerdistance->setEnabled(false);
        ui->label_dpv_triggerdistance_suffix->setEnabled(false);
    }else{
        ui->input_dpv_triggertime->setEnabled(false);
        ui->label_dpv_triggertime->setEnabled(false);
        ui->label_dpv_triggertime_suffix->setEnabled(false);

        ui->label_dpv_triggerdistance->setEnabled(true);
        ui->input_dpv_triggerdistance->setEnabled(true);
        ui->label_dpv_triggerdistance_suffix->setEnabled(true);
    }
}
