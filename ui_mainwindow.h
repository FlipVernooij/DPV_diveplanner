/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_properties;
    QFrame *frame;
    QLabel *label_gasSupply;
    QFrame *frame_doubles;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_cylindersize_doubles;
    QSpinBox *input_cylindersize_doubles;
    QLabel *label_cylindersize_doubles_suffix;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_pressure_doubles;
    QSpinBox *input_pressure_doubles;
    QLabel *label_pressure_doubles_suffix;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_usable_doubles;
    QSpinBox *input_usable_doubles;
    QLabel *label_usable_doubles_suffix;
    QFrame *frame_stages;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_header_stages;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_cylindersize_stages;
    QSpinBox *input_cylindersize_stages;
    QLabel *label_cylindersize_stages_suffix;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_pressure_stages;
    QSpinBox *input_pressure_stages;
    QLabel *label_pressure_stages_suffix;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_usable_stages;
    QSpinBox *input_usable_stages;
    QLabel *label_usable_stages_suffix;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_amount_stages;
    QSpinBox *input_amount_stages;
    QLabel *label_amount_stages_suffix;
    QFrame *frame_diveDetails;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_header_diveDetails;
    QHBoxLayout *horizontalLayout;
    QLabel *label_avg_depth;
    QSpinBox *input_avg_depth;
    QLabel *label_avg_depth_suffix;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_dpv_in_type;
    QComboBox *input_dpv_in_type;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_dpv_triggertime;
    QSpinBox *input_dpv_triggertime;
    QLabel *label_dpv_triggertime_suffix;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_dpv_triggerdistance;
    QSpinBox *input_dpv_triggerdistance;
    QLabel *label_dpv_triggerdistance_suffix;
    QWidget *tab_plan;
    QFrame *frame_estimates;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_gasreserve_minutes_text;
    QLabel *label_gasreserve_minutes_value;
    QLabel *label_gasreserve_minutes_suffix;
    QLabel *label_header_estimats;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_dpv_penetration_text;
    QLabel *label_dpv_penetration_value;
    QLabel *label_dpv_penetration_suffix;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_triggertime_text;
    QLabel *label_triggertime_value;
    QLabel *label_triggertime_suffix;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_divetime_text;
    QLabel *label_divetime_value;
    QLabel *label_divetime_suffix;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_gas_reserve_text;
    QLabel *label_swim_penetration_value;
    QLabel *label_swim_penetration_suffix;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label;
    QLabel *label_gas_left_in_doubles_value;
    QLabel *label_3;
    QFrame *frame_dpv;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_dpvplan_header;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_tow_text;
    QLabel *label_tow_value;
    QLabel *label_tow_suffix;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_swim_text;
    QLabel *label_swim_value;
    QLabel *label_swim_suffix;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_oog_text;
    QLabel *label_oog_value;
    QLabel *label_oog_suffix;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_tow_no_stages_text;
    QLabel *label_tow_no_stages_value;
    QLabel *label_tow_no_stages_suffix;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_no_dpv_half_stages_text;
    QLabel *label_no_dpv_half_stages_value;
    QLabel *label_no_dpv_half_stages_suffix;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_no_dpv_no_stages_text;
    QLabel *label_no_dpv_no_stages_value;
    QLabel *label_no_dpv_no_stages_suffix;
    QWidget *tab_settings;
    QFrame *frame_global_settings;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_header_global_settings;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_scr;
    QSpinBox *input_scr;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_scr_stress;
    QSpinBox *input_scr_stress;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_swim_speed;
    QSpinBox *input_swim_speed;
    QFrame *frame_dpv_settings;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_header_dpv_settings;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_dpv_scr;
    QSpinBox *input_dpv_scr;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_dpv_scr_stress;
    QSpinBox *input_dpv_scr_stress;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_dpv_total_burntime;
    QSpinBox *input_dpv_total_burntime;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_dpv_tow;
    QSpinBox *input_dpv_tow;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_dpv_speed;
    QSpinBox *input_dpv_speed;
    QWidget *tab_about;
    QTextBrowser *text_disclaimer;
    QFrame *frame_2;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_6;
    QLabel *label_13;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_8;
    QLabel *label_15;
    QLabel *label_20;
    QFrame *frame_3;
    QWidget *layoutWidget_51;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_11;
    QLabel *label_21;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_zero_gravity_logo;
    QLabel *label_logo;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(740, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(740, 668));
        MainWindow->setMaximumSize(QSize(740, 700));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/gue_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 90, 701, 511));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_properties = new QWidget();
        tab_properties->setObjectName(QStringLiteral("tab_properties"));
        frame = new QFrame(tab_properties);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 210, 681, 261));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_gasSupply = new QLabel(frame);
        label_gasSupply->setObjectName(QStringLiteral("label_gasSupply"));
        label_gasSupply->setGeometry(QRect(10, 10, 72, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_gasSupply->setFont(font);
        frame_doubles = new QFrame(frame);
        frame_doubles->setObjectName(QStringLiteral("frame_doubles"));
        frame_doubles->setGeometry(QRect(10, 30, 321, 211));
        frame_doubles->setFrameShape(QFrame::StyledPanel);
        frame_doubles->setFrameShadow(QFrame::Raised);
        layoutWidget_7 = new QWidget(frame_doubles);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 10, 301, 124));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_7);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        verticalLayout_2->addWidget(label_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_cylindersize_doubles = new QLabel(layoutWidget_7);
        label_cylindersize_doubles->setObjectName(QStringLiteral("label_cylindersize_doubles"));

        horizontalLayout_3->addWidget(label_cylindersize_doubles);

        input_cylindersize_doubles = new QSpinBox(layoutWidget_7);
        input_cylindersize_doubles->setObjectName(QStringLiteral("input_cylindersize_doubles"));
        sizePolicy.setHeightForWidth(input_cylindersize_doubles->sizePolicy().hasHeightForWidth());
        input_cylindersize_doubles->setSizePolicy(sizePolicy);
        input_cylindersize_doubles->setMinimumSize(QSize(56, 0));
        input_cylindersize_doubles->setMaximumSize(QSize(56, 16777215));
        input_cylindersize_doubles->setMinimum(10);
        input_cylindersize_doubles->setMaximum(18);
        input_cylindersize_doubles->setValue(11);

        horizontalLayout_3->addWidget(input_cylindersize_doubles);

        label_cylindersize_doubles_suffix = new QLabel(layoutWidget_7);
        label_cylindersize_doubles_suffix->setObjectName(QStringLiteral("label_cylindersize_doubles_suffix"));
        sizePolicy.setHeightForWidth(label_cylindersize_doubles_suffix->sizePolicy().hasHeightForWidth());
        label_cylindersize_doubles_suffix->setSizePolicy(sizePolicy);
        label_cylindersize_doubles_suffix->setMinimumSize(QSize(50, 0));
        label_cylindersize_doubles_suffix->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(label_cylindersize_doubles_suffix);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_pressure_doubles = new QLabel(layoutWidget_7);
        label_pressure_doubles->setObjectName(QStringLiteral("label_pressure_doubles"));

        horizontalLayout_4->addWidget(label_pressure_doubles);

        input_pressure_doubles = new QSpinBox(layoutWidget_7);
        input_pressure_doubles->setObjectName(QStringLiteral("input_pressure_doubles"));
        sizePolicy.setHeightForWidth(input_pressure_doubles->sizePolicy().hasHeightForWidth());
        input_pressure_doubles->setSizePolicy(sizePolicy);
        input_pressure_doubles->setMinimumSize(QSize(56, 0));
        input_pressure_doubles->setMaximumSize(QSize(56, 16777215));
        input_pressure_doubles->setMinimum(120);
        input_pressure_doubles->setMaximum(240);
        input_pressure_doubles->setValue(200);

        horizontalLayout_4->addWidget(input_pressure_doubles);

        label_pressure_doubles_suffix = new QLabel(layoutWidget_7);
        label_pressure_doubles_suffix->setObjectName(QStringLiteral("label_pressure_doubles_suffix"));
        sizePolicy.setHeightForWidth(label_pressure_doubles_suffix->sizePolicy().hasHeightForWidth());
        label_pressure_doubles_suffix->setSizePolicy(sizePolicy);
        label_pressure_doubles_suffix->setMinimumSize(QSize(50, 0));
        label_pressure_doubles_suffix->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(label_pressure_doubles_suffix);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_usable_doubles = new QLabel(layoutWidget_7);
        label_usable_doubles->setObjectName(QStringLiteral("label_usable_doubles"));

        horizontalLayout_5->addWidget(label_usable_doubles);

        input_usable_doubles = new QSpinBox(layoutWidget_7);
        input_usable_doubles->setObjectName(QStringLiteral("input_usable_doubles"));
        sizePolicy.setHeightForWidth(input_usable_doubles->sizePolicy().hasHeightForWidth());
        input_usable_doubles->setSizePolicy(sizePolicy);
        input_usable_doubles->setMinimumSize(QSize(56, 0));
        input_usable_doubles->setMaximumSize(QSize(56, 16777215));
        input_usable_doubles->setMaximum(80);
        input_usable_doubles->setValue(0);

        horizontalLayout_5->addWidget(input_usable_doubles);

        label_usable_doubles_suffix = new QLabel(layoutWidget_7);
        label_usable_doubles_suffix->setObjectName(QStringLiteral("label_usable_doubles_suffix"));
        sizePolicy.setHeightForWidth(label_usable_doubles_suffix->sizePolicy().hasHeightForWidth());
        label_usable_doubles_suffix->setSizePolicy(sizePolicy);
        label_usable_doubles_suffix->setMinimumSize(QSize(50, 0));
        label_usable_doubles_suffix->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(label_usable_doubles_suffix);


        verticalLayout_2->addLayout(horizontalLayout_5);

        frame_stages = new QFrame(frame);
        frame_stages->setObjectName(QStringLiteral("frame_stages"));
        frame_stages->setGeometry(QRect(350, 30, 321, 211));
        frame_stages->setFrameShape(QFrame::StyledPanel);
        frame_stages->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_stages);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_header_stages = new QLabel(widget);
        label_header_stages->setObjectName(QStringLiteral("label_header_stages"));
        label_header_stages->setFont(font);

        verticalLayout_3->addWidget(label_header_stages);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_cylindersize_stages = new QLabel(widget);
        label_cylindersize_stages->setObjectName(QStringLiteral("label_cylindersize_stages"));

        horizontalLayout_6->addWidget(label_cylindersize_stages);

        input_cylindersize_stages = new QSpinBox(widget);
        input_cylindersize_stages->setObjectName(QStringLiteral("input_cylindersize_stages"));
        sizePolicy.setHeightForWidth(input_cylindersize_stages->sizePolicy().hasHeightForWidth());
        input_cylindersize_stages->setSizePolicy(sizePolicy);
        input_cylindersize_stages->setMinimumSize(QSize(56, 0));
        input_cylindersize_stages->setMaximumSize(QSize(56, 16777215));
        input_cylindersize_stages->setMinimum(10);
        input_cylindersize_stages->setMaximum(18);
        input_cylindersize_stages->setValue(11);

        horizontalLayout_6->addWidget(input_cylindersize_stages);

        label_cylindersize_stages_suffix = new QLabel(widget);
        label_cylindersize_stages_suffix->setObjectName(QStringLiteral("label_cylindersize_stages_suffix"));
        sizePolicy.setHeightForWidth(label_cylindersize_stages_suffix->sizePolicy().hasHeightForWidth());
        label_cylindersize_stages_suffix->setSizePolicy(sizePolicy);
        label_cylindersize_stages_suffix->setMinimumSize(QSize(50, 0));
        label_cylindersize_stages_suffix->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(label_cylindersize_stages_suffix);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_pressure_stages = new QLabel(widget);
        label_pressure_stages->setObjectName(QStringLiteral("label_pressure_stages"));

        horizontalLayout_7->addWidget(label_pressure_stages);

        input_pressure_stages = new QSpinBox(widget);
        input_pressure_stages->setObjectName(QStringLiteral("input_pressure_stages"));
        sizePolicy.setHeightForWidth(input_pressure_stages->sizePolicy().hasHeightForWidth());
        input_pressure_stages->setSizePolicy(sizePolicy);
        input_pressure_stages->setMinimumSize(QSize(56, 0));
        input_pressure_stages->setMaximumSize(QSize(56, 16777215));
        input_pressure_stages->setMinimum(120);
        input_pressure_stages->setMaximum(240);
        input_pressure_stages->setValue(200);

        horizontalLayout_7->addWidget(input_pressure_stages);

        label_pressure_stages_suffix = new QLabel(widget);
        label_pressure_stages_suffix->setObjectName(QStringLiteral("label_pressure_stages_suffix"));
        sizePolicy.setHeightForWidth(label_pressure_stages_suffix->sizePolicy().hasHeightForWidth());
        label_pressure_stages_suffix->setSizePolicy(sizePolicy);
        label_pressure_stages_suffix->setMinimumSize(QSize(50, 0));
        label_pressure_stages_suffix->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_7->addWidget(label_pressure_stages_suffix);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_usable_stages = new QLabel(widget);
        label_usable_stages->setObjectName(QStringLiteral("label_usable_stages"));

        horizontalLayout_9->addWidget(label_usable_stages);

        input_usable_stages = new QSpinBox(widget);
        input_usable_stages->setObjectName(QStringLiteral("input_usable_stages"));
        sizePolicy.setHeightForWidth(input_usable_stages->sizePolicy().hasHeightForWidth());
        input_usable_stages->setSizePolicy(sizePolicy);
        input_usable_stages->setMinimumSize(QSize(56, 0));
        input_usable_stages->setMaximumSize(QSize(56, 16777215));
        input_usable_stages->setMaximum(240);
        input_usable_stages->setValue(90);

        horizontalLayout_9->addWidget(input_usable_stages);

        label_usable_stages_suffix = new QLabel(widget);
        label_usable_stages_suffix->setObjectName(QStringLiteral("label_usable_stages_suffix"));
        sizePolicy.setHeightForWidth(label_usable_stages_suffix->sizePolicy().hasHeightForWidth());
        label_usable_stages_suffix->setSizePolicy(sizePolicy);
        label_usable_stages_suffix->setMinimumSize(QSize(50, 0));
        label_usable_stages_suffix->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_9->addWidget(label_usable_stages_suffix);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_amount_stages = new QLabel(widget);
        label_amount_stages->setObjectName(QStringLiteral("label_amount_stages"));

        horizontalLayout_8->addWidget(label_amount_stages);

        input_amount_stages = new QSpinBox(widget);
        input_amount_stages->setObjectName(QStringLiteral("input_amount_stages"));
        sizePolicy.setHeightForWidth(input_amount_stages->sizePolicy().hasHeightForWidth());
        input_amount_stages->setSizePolicy(sizePolicy);
        input_amount_stages->setMinimumSize(QSize(56, 0));
        input_amount_stages->setMaximumSize(QSize(56, 16777215));

        horizontalLayout_8->addWidget(input_amount_stages);

        label_amount_stages_suffix = new QLabel(widget);
        label_amount_stages_suffix->setObjectName(QStringLiteral("label_amount_stages_suffix"));
        sizePolicy.setHeightForWidth(label_amount_stages_suffix->sizePolicy().hasHeightForWidth());
        label_amount_stages_suffix->setSizePolicy(sizePolicy);
        label_amount_stages_suffix->setMinimumSize(QSize(50, 0));
        label_amount_stages_suffix->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(label_amount_stages_suffix);


        verticalLayout_3->addLayout(horizontalLayout_8);

        frame_diveDetails = new QFrame(tab_properties);
        frame_diveDetails->setObjectName(QStringLiteral("frame_diveDetails"));
        frame_diveDetails->setGeometry(QRect(20, 10, 661, 186));
        frame_diveDetails->setFrameShape(QFrame::StyledPanel);
        frame_diveDetails->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_diveDetails);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_header_diveDetails = new QLabel(frame_diveDetails);
        label_header_diveDetails->setObjectName(QStringLiteral("label_header_diveDetails"));
        label_header_diveDetails->setFont(font);

        verticalLayout->addWidget(label_header_diveDetails);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_avg_depth = new QLabel(frame_diveDetails);
        label_avg_depth->setObjectName(QStringLiteral("label_avg_depth"));

        horizontalLayout->addWidget(label_avg_depth);

        input_avg_depth = new QSpinBox(frame_diveDetails);
        input_avg_depth->setObjectName(QStringLiteral("input_avg_depth"));
        sizePolicy.setHeightForWidth(input_avg_depth->sizePolicy().hasHeightForWidth());
        input_avg_depth->setSizePolicy(sizePolicy);
        input_avg_depth->setMinimumSize(QSize(56, 0));
        input_avg_depth->setMaximumSize(QSize(56, 16777215));
        input_avg_depth->setMaximum(30);
        input_avg_depth->setValue(10);

        horizontalLayout->addWidget(input_avg_depth);

        label_avg_depth_suffix = new QLabel(frame_diveDetails);
        label_avg_depth_suffix->setObjectName(QStringLiteral("label_avg_depth_suffix"));
        sizePolicy.setHeightForWidth(label_avg_depth_suffix->sizePolicy().hasHeightForWidth());
        label_avg_depth_suffix->setSizePolicy(sizePolicy);
        label_avg_depth_suffix->setMinimumSize(QSize(50, 0));
        label_avg_depth_suffix->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label_avg_depth_suffix);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        label_dpv_in_type = new QLabel(frame_diveDetails);
        label_dpv_in_type->setObjectName(QStringLiteral("label_dpv_in_type"));

        horizontalLayout_38->addWidget(label_dpv_in_type);

        input_dpv_in_type = new QComboBox(frame_diveDetails);
        input_dpv_in_type->setObjectName(QStringLiteral("input_dpv_in_type"));
        input_dpv_in_type->setMinimumSize(QSize(100, 0));
        input_dpv_in_type->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_38->addWidget(input_dpv_in_type);


        verticalLayout->addLayout(horizontalLayout_38);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        label_dpv_triggertime = new QLabel(frame_diveDetails);
        label_dpv_triggertime->setObjectName(QStringLiteral("label_dpv_triggertime"));

        horizontalLayout_44->addWidget(label_dpv_triggertime);

        input_dpv_triggertime = new QSpinBox(frame_diveDetails);
        input_dpv_triggertime->setObjectName(QStringLiteral("input_dpv_triggertime"));
        sizePolicy.setHeightForWidth(input_dpv_triggertime->sizePolicy().hasHeightForWidth());
        input_dpv_triggertime->setSizePolicy(sizePolicy);
        input_dpv_triggertime->setMinimumSize(QSize(56, 0));
        input_dpv_triggertime->setMaximumSize(QSize(56, 16777215));

        horizontalLayout_44->addWidget(input_dpv_triggertime);

        label_dpv_triggertime_suffix = new QLabel(frame_diveDetails);
        label_dpv_triggertime_suffix->setObjectName(QStringLiteral("label_dpv_triggertime_suffix"));
        sizePolicy.setHeightForWidth(label_dpv_triggertime_suffix->sizePolicy().hasHeightForWidth());
        label_dpv_triggertime_suffix->setSizePolicy(sizePolicy);
        label_dpv_triggertime_suffix->setMinimumSize(QSize(50, 0));
        label_dpv_triggertime_suffix->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_44->addWidget(label_dpv_triggertime_suffix);


        verticalLayout->addLayout(horizontalLayout_44);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setSpacing(6);
        horizontalLayout_45->setObjectName(QStringLiteral("horizontalLayout_45"));
        label_dpv_triggerdistance = new QLabel(frame_diveDetails);
        label_dpv_triggerdistance->setObjectName(QStringLiteral("label_dpv_triggerdistance"));
        label_dpv_triggerdistance->setEnabled(false);

        horizontalLayout_45->addWidget(label_dpv_triggerdistance);

        input_dpv_triggerdistance = new QSpinBox(frame_diveDetails);
        input_dpv_triggerdistance->setObjectName(QStringLiteral("input_dpv_triggerdistance"));
        input_dpv_triggerdistance->setEnabled(false);
        sizePolicy.setHeightForWidth(input_dpv_triggerdistance->sizePolicy().hasHeightForWidth());
        input_dpv_triggerdistance->setSizePolicy(sizePolicy);
        input_dpv_triggerdistance->setMinimumSize(QSize(56, 0));
        input_dpv_triggerdistance->setMaximumSize(QSize(56, 16777215));
        input_dpv_triggerdistance->setMaximum(5000);

        horizontalLayout_45->addWidget(input_dpv_triggerdistance);

        label_dpv_triggerdistance_suffix = new QLabel(frame_diveDetails);
        label_dpv_triggerdistance_suffix->setObjectName(QStringLiteral("label_dpv_triggerdistance_suffix"));
        label_dpv_triggerdistance_suffix->setEnabled(false);
        sizePolicy.setHeightForWidth(label_dpv_triggerdistance_suffix->sizePolicy().hasHeightForWidth());
        label_dpv_triggerdistance_suffix->setSizePolicy(sizePolicy);
        label_dpv_triggerdistance_suffix->setMinimumSize(QSize(50, 0));
        label_dpv_triggerdistance_suffix->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_45->addWidget(label_dpv_triggerdistance_suffix);


        verticalLayout->addLayout(horizontalLayout_45);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab_properties, QString());
        tab_plan = new QWidget();
        tab_plan->setObjectName(QStringLiteral("tab_plan"));
        frame_estimates = new QFrame(tab_plan);
        frame_estimates->setObjectName(QStringLiteral("frame_estimates"));
        frame_estimates->setGeometry(QRect(10, 10, 671, 216));
        frame_estimates->setFrameShape(QFrame::StyledPanel);
        frame_estimates->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_estimates);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_gasreserve_minutes_text = new QLabel(frame_estimates);
        label_gasreserve_minutes_text->setObjectName(QStringLiteral("label_gasreserve_minutes_text"));

        horizontalLayout_14->addWidget(label_gasreserve_minutes_text);

        label_gasreserve_minutes_value = new QLabel(frame_estimates);
        label_gasreserve_minutes_value->setObjectName(QStringLiteral("label_gasreserve_minutes_value"));
        label_gasreserve_minutes_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(label_gasreserve_minutes_value);

        label_gasreserve_minutes_suffix = new QLabel(frame_estimates);
        label_gasreserve_minutes_suffix->setObjectName(QStringLiteral("label_gasreserve_minutes_suffix"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_gasreserve_minutes_suffix->sizePolicy().hasHeightForWidth());
        label_gasreserve_minutes_suffix->setSizePolicy(sizePolicy1);
        label_gasreserve_minutes_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_14->addWidget(label_gasreserve_minutes_suffix);


        gridLayout_4->addLayout(horizontalLayout_14, 6, 0, 1, 1);

        label_header_estimats = new QLabel(frame_estimates);
        label_header_estimats->setObjectName(QStringLiteral("label_header_estimats"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_header_estimats->setFont(font1);

        gridLayout_4->addWidget(label_header_estimats, 0, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_dpv_penetration_text = new QLabel(frame_estimates);
        label_dpv_penetration_text->setObjectName(QStringLiteral("label_dpv_penetration_text"));

        horizontalLayout_12->addWidget(label_dpv_penetration_text);

        label_dpv_penetration_value = new QLabel(frame_estimates);
        label_dpv_penetration_value->setObjectName(QStringLiteral("label_dpv_penetration_value"));
        label_dpv_penetration_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_dpv_penetration_value);

        label_dpv_penetration_suffix = new QLabel(frame_estimates);
        label_dpv_penetration_suffix->setObjectName(QStringLiteral("label_dpv_penetration_suffix"));
        sizePolicy1.setHeightForWidth(label_dpv_penetration_suffix->sizePolicy().hasHeightForWidth());
        label_dpv_penetration_suffix->setSizePolicy(sizePolicy1);
        label_dpv_penetration_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_12->addWidget(label_dpv_penetration_suffix);


        gridLayout_4->addLayout(horizontalLayout_12, 3, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_triggertime_text = new QLabel(frame_estimates);
        label_triggertime_text->setObjectName(QStringLiteral("label_triggertime_text"));

        horizontalLayout_11->addWidget(label_triggertime_text);

        label_triggertime_value = new QLabel(frame_estimates);
        label_triggertime_value->setObjectName(QStringLiteral("label_triggertime_value"));
        label_triggertime_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_triggertime_value);

        label_triggertime_suffix = new QLabel(frame_estimates);
        label_triggertime_suffix->setObjectName(QStringLiteral("label_triggertime_suffix"));
        sizePolicy1.setHeightForWidth(label_triggertime_suffix->sizePolicy().hasHeightForWidth());
        label_triggertime_suffix->setSizePolicy(sizePolicy1);
        label_triggertime_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_11->addWidget(label_triggertime_suffix);


        gridLayout_4->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_divetime_text = new QLabel(frame_estimates);
        label_divetime_text->setObjectName(QStringLiteral("label_divetime_text"));

        horizontalLayout_10->addWidget(label_divetime_text);

        label_divetime_value = new QLabel(frame_estimates);
        label_divetime_value->setObjectName(QStringLiteral("label_divetime_value"));
        label_divetime_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_divetime_value);

        label_divetime_suffix = new QLabel(frame_estimates);
        label_divetime_suffix->setObjectName(QStringLiteral("label_divetime_suffix"));
        sizePolicy1.setHeightForWidth(label_divetime_suffix->sizePolicy().hasHeightForWidth());
        label_divetime_suffix->setSizePolicy(sizePolicy1);
        label_divetime_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_10->addWidget(label_divetime_suffix);


        gridLayout_4->addLayout(horizontalLayout_10, 1, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_gas_reserve_text = new QLabel(frame_estimates);
        label_gas_reserve_text->setObjectName(QStringLiteral("label_gas_reserve_text"));

        horizontalLayout_13->addWidget(label_gas_reserve_text);

        label_swim_penetration_value = new QLabel(frame_estimates);
        label_swim_penetration_value->setObjectName(QStringLiteral("label_swim_penetration_value"));
        label_swim_penetration_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(label_swim_penetration_value);

        label_swim_penetration_suffix = new QLabel(frame_estimates);
        label_swim_penetration_suffix->setObjectName(QStringLiteral("label_swim_penetration_suffix"));
        sizePolicy1.setHeightForWidth(label_swim_penetration_suffix->sizePolicy().hasHeightForWidth());
        label_swim_penetration_suffix->setSizePolicy(sizePolicy1);
        label_swim_penetration_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_13->addWidget(label_swim_penetration_suffix);


        gridLayout_4->addLayout(horizontalLayout_13, 4, 0, 1, 1);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        label = new QLabel(frame_estimates);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_29->addWidget(label);

        label_gas_left_in_doubles_value = new QLabel(frame_estimates);
        label_gas_left_in_doubles_value->setObjectName(QStringLiteral("label_gas_left_in_doubles_value"));
        label_gas_left_in_doubles_value->setLayoutDirection(Qt::LeftToRight);
        label_gas_left_in_doubles_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_29->addWidget(label_gas_left_in_doubles_value);

        label_3 = new QLabel(frame_estimates);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_29->addWidget(label_3);


        gridLayout_4->addLayout(horizontalLayout_29, 7, 0, 1, 1);

        frame_dpv = new QFrame(tab_plan);
        frame_dpv->setObjectName(QStringLiteral("frame_dpv"));
        frame_dpv->setGeometry(QRect(10, 250, 671, 218));
        frame_dpv->setFrameShape(QFrame::StyledPanel);
        frame_dpv->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_dpv);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_dpvplan_header = new QLabel(frame_dpv);
        label_dpvplan_header->setObjectName(QStringLiteral("label_dpvplan_header"));
        label_dpvplan_header->setFont(font1);

        verticalLayout_5->addWidget(label_dpvplan_header);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_tow_text = new QLabel(frame_dpv);
        label_tow_text->setObjectName(QStringLiteral("label_tow_text"));

        horizontalLayout_15->addWidget(label_tow_text);

        label_tow_value = new QLabel(frame_dpv);
        label_tow_value->setObjectName(QStringLiteral("label_tow_value"));
        label_tow_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(label_tow_value);

        label_tow_suffix = new QLabel(frame_dpv);
        label_tow_suffix->setObjectName(QStringLiteral("label_tow_suffix"));
        sizePolicy1.setHeightForWidth(label_tow_suffix->sizePolicy().hasHeightForWidth());
        label_tow_suffix->setSizePolicy(sizePolicy1);
        label_tow_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_15->addWidget(label_tow_suffix);


        verticalLayout_5->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_swim_text = new QLabel(frame_dpv);
        label_swim_text->setObjectName(QStringLiteral("label_swim_text"));

        horizontalLayout_16->addWidget(label_swim_text);

        label_swim_value = new QLabel(frame_dpv);
        label_swim_value->setObjectName(QStringLiteral("label_swim_value"));
        label_swim_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(label_swim_value);

        label_swim_suffix = new QLabel(frame_dpv);
        label_swim_suffix->setObjectName(QStringLiteral("label_swim_suffix"));
        sizePolicy1.setHeightForWidth(label_swim_suffix->sizePolicy().hasHeightForWidth());
        label_swim_suffix->setSizePolicy(sizePolicy1);
        label_swim_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_16->addWidget(label_swim_suffix);


        verticalLayout_5->addLayout(horizontalLayout_16);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_oog_text = new QLabel(frame_dpv);
        label_oog_text->setObjectName(QStringLiteral("label_oog_text"));

        horizontalLayout_18->addWidget(label_oog_text);

        label_oog_value = new QLabel(frame_dpv);
        label_oog_value->setObjectName(QStringLiteral("label_oog_value"));
        label_oog_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_18->addWidget(label_oog_value);

        label_oog_suffix = new QLabel(frame_dpv);
        label_oog_suffix->setObjectName(QStringLiteral("label_oog_suffix"));
        sizePolicy1.setHeightForWidth(label_oog_suffix->sizePolicy().hasHeightForWidth());
        label_oog_suffix->setSizePolicy(sizePolicy1);
        label_oog_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_18->addWidget(label_oog_suffix);


        verticalLayout_5->addLayout(horizontalLayout_18);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_tow_no_stages_text = new QLabel(frame_dpv);
        label_tow_no_stages_text->setObjectName(QStringLiteral("label_tow_no_stages_text"));

        horizontalLayout_17->addWidget(label_tow_no_stages_text);

        label_tow_no_stages_value = new QLabel(frame_dpv);
        label_tow_no_stages_value->setObjectName(QStringLiteral("label_tow_no_stages_value"));
        label_tow_no_stages_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_17->addWidget(label_tow_no_stages_value);

        label_tow_no_stages_suffix = new QLabel(frame_dpv);
        label_tow_no_stages_suffix->setObjectName(QStringLiteral("label_tow_no_stages_suffix"));
        sizePolicy1.setHeightForWidth(label_tow_no_stages_suffix->sizePolicy().hasHeightForWidth());
        label_tow_no_stages_suffix->setSizePolicy(sizePolicy1);
        label_tow_no_stages_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_17->addWidget(label_tow_no_stages_suffix);


        verticalLayout_5->addLayout(horizontalLayout_17);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_no_dpv_half_stages_text = new QLabel(frame_dpv);
        label_no_dpv_half_stages_text->setObjectName(QStringLiteral("label_no_dpv_half_stages_text"));

        horizontalLayout_19->addWidget(label_no_dpv_half_stages_text);

        label_no_dpv_half_stages_value = new QLabel(frame_dpv);
        label_no_dpv_half_stages_value->setObjectName(QStringLiteral("label_no_dpv_half_stages_value"));
        label_no_dpv_half_stages_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_19->addWidget(label_no_dpv_half_stages_value);

        label_no_dpv_half_stages_suffix = new QLabel(frame_dpv);
        label_no_dpv_half_stages_suffix->setObjectName(QStringLiteral("label_no_dpv_half_stages_suffix"));
        sizePolicy1.setHeightForWidth(label_no_dpv_half_stages_suffix->sizePolicy().hasHeightForWidth());
        label_no_dpv_half_stages_suffix->setSizePolicy(sizePolicy1);
        label_no_dpv_half_stages_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_19->addWidget(label_no_dpv_half_stages_suffix);


        verticalLayout_5->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_no_dpv_no_stages_text = new QLabel(frame_dpv);
        label_no_dpv_no_stages_text->setObjectName(QStringLiteral("label_no_dpv_no_stages_text"));

        horizontalLayout_20->addWidget(label_no_dpv_no_stages_text);

        label_no_dpv_no_stages_value = new QLabel(frame_dpv);
        label_no_dpv_no_stages_value->setObjectName(QStringLiteral("label_no_dpv_no_stages_value"));
        label_no_dpv_no_stages_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_20->addWidget(label_no_dpv_no_stages_value);

        label_no_dpv_no_stages_suffix = new QLabel(frame_dpv);
        label_no_dpv_no_stages_suffix->setObjectName(QStringLiteral("label_no_dpv_no_stages_suffix"));
        sizePolicy1.setHeightForWidth(label_no_dpv_no_stages_suffix->sizePolicy().hasHeightForWidth());
        label_no_dpv_no_stages_suffix->setSizePolicy(sizePolicy1);
        label_no_dpv_no_stages_suffix->setMinimumSize(QSize(60, 0));

        horizontalLayout_20->addWidget(label_no_dpv_no_stages_suffix);


        verticalLayout_5->addLayout(horizontalLayout_20);


        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_plan, QString());
        tab_settings = new QWidget();
        tab_settings->setObjectName(QStringLiteral("tab_settings"));
        frame_global_settings = new QFrame(tab_settings);
        frame_global_settings->setObjectName(QStringLiteral("frame_global_settings"));
        frame_global_settings->setGeometry(QRect(10, 20, 321, 401));
        frame_global_settings->setFrameShape(QFrame::StyledPanel);
        frame_global_settings->setFrameShadow(QFrame::Raised);
        layoutWidget_3 = new QWidget(frame_global_settings);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(19, 13, 285, 132));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_header_global_settings = new QLabel(layoutWidget_3);
        label_header_global_settings->setObjectName(QStringLiteral("label_header_global_settings"));
        label_header_global_settings->setFont(font1);

        verticalLayout_6->addWidget(label_header_global_settings);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_scr = new QLabel(layoutWidget_3);
        label_scr->setObjectName(QStringLiteral("label_scr"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        label_scr->setFont(font2);

        horizontalLayout_21->addWidget(label_scr);

        input_scr = new QSpinBox(layoutWidget_3);
        input_scr->setObjectName(QStringLiteral("input_scr"));
        sizePolicy.setHeightForWidth(input_scr->sizePolicy().hasHeightForWidth());
        input_scr->setSizePolicy(sizePolicy);
        input_scr->setMinimumSize(QSize(56, 0));
        input_scr->setMaximumSize(QSize(56, 24));
        input_scr->setMinimum(10);
        input_scr->setMaximum(25);
        input_scr->setValue(20);

        horizontalLayout_21->addWidget(input_scr);


        verticalLayout_6->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_scr_stress = new QLabel(layoutWidget_3);
        label_scr_stress->setObjectName(QStringLiteral("label_scr_stress"));
        label_scr_stress->setFont(font2);

        horizontalLayout_22->addWidget(label_scr_stress);

        input_scr_stress = new QSpinBox(layoutWidget_3);
        input_scr_stress->setObjectName(QStringLiteral("input_scr_stress"));
        sizePolicy.setHeightForWidth(input_scr_stress->sizePolicy().hasHeightForWidth());
        input_scr_stress->setSizePolicy(sizePolicy);
        input_scr_stress->setMinimumSize(QSize(56, 0));
        input_scr_stress->setMaximumSize(QSize(56, 16777215));
        input_scr_stress->setMinimum(10);
        input_scr_stress->setMaximum(30);
        input_scr_stress->setValue(22);

        horizontalLayout_22->addWidget(input_scr_stress);


        verticalLayout_6->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_swim_speed = new QLabel(layoutWidget_3);
        label_swim_speed->setObjectName(QStringLiteral("label_swim_speed"));
        label_swim_speed->setFont(font2);

        horizontalLayout_23->addWidget(label_swim_speed);

        input_swim_speed = new QSpinBox(layoutWidget_3);
        input_swim_speed->setObjectName(QStringLiteral("input_swim_speed"));
        sizePolicy.setHeightForWidth(input_swim_speed->sizePolicy().hasHeightForWidth());
        input_swim_speed->setSizePolicy(sizePolicy);
        input_swim_speed->setMinimumSize(QSize(56, 0));
        input_swim_speed->setMaximumSize(QSize(56, 16777215));
        input_swim_speed->setMinimum(5);
        input_swim_speed->setMaximum(25);
        input_swim_speed->setValue(15);

        horizontalLayout_23->addWidget(input_swim_speed);


        verticalLayout_6->addLayout(horizontalLayout_23);

        frame_dpv_settings = new QFrame(tab_settings);
        frame_dpv_settings->setObjectName(QStringLiteral("frame_dpv_settings"));
        frame_dpv_settings->setGeometry(QRect(340, 20, 351, 401));
        frame_dpv_settings->setFrameShape(QFrame::StyledPanel);
        frame_dpv_settings->setFrameShadow(QFrame::Raised);
        layoutWidget_4 = new QWidget(frame_dpv_settings);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(18, 13, 317, 204));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_header_dpv_settings = new QLabel(layoutWidget_4);
        label_header_dpv_settings->setObjectName(QStringLiteral("label_header_dpv_settings"));
        label_header_dpv_settings->setFont(font1);

        verticalLayout_7->addWidget(label_header_dpv_settings);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_dpv_scr = new QLabel(layoutWidget_4);
        label_dpv_scr->setObjectName(QStringLiteral("label_dpv_scr"));
        label_dpv_scr->setFont(font2);

        horizontalLayout_24->addWidget(label_dpv_scr);

        input_dpv_scr = new QSpinBox(layoutWidget_4);
        input_dpv_scr->setObjectName(QStringLiteral("input_dpv_scr"));
        sizePolicy.setHeightForWidth(input_dpv_scr->sizePolicy().hasHeightForWidth());
        input_dpv_scr->setSizePolicy(sizePolicy);
        input_dpv_scr->setMinimumSize(QSize(56, 0));
        input_dpv_scr->setMaximumSize(QSize(56, 16777215));
        input_dpv_scr->setLayoutDirection(Qt::LeftToRight);
        input_dpv_scr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_dpv_scr->setMinimum(10);
        input_dpv_scr->setMaximum(30);
        input_dpv_scr->setValue(18);

        horizontalLayout_24->addWidget(input_dpv_scr);


        verticalLayout_7->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_dpv_scr_stress = new QLabel(layoutWidget_4);
        label_dpv_scr_stress->setObjectName(QStringLiteral("label_dpv_scr_stress"));
        label_dpv_scr_stress->setFont(font2);

        horizontalLayout_25->addWidget(label_dpv_scr_stress);

        input_dpv_scr_stress = new QSpinBox(layoutWidget_4);
        input_dpv_scr_stress->setObjectName(QStringLiteral("input_dpv_scr_stress"));
        sizePolicy.setHeightForWidth(input_dpv_scr_stress->sizePolicy().hasHeightForWidth());
        input_dpv_scr_stress->setSizePolicy(sizePolicy);
        input_dpv_scr_stress->setMinimumSize(QSize(56, 0));
        input_dpv_scr_stress->setMaximumSize(QSize(56, 24));
        input_dpv_scr_stress->setLayoutDirection(Qt::LeftToRight);
        input_dpv_scr_stress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_dpv_scr_stress->setMinimum(10);
        input_dpv_scr_stress->setMaximum(25);
        input_dpv_scr_stress->setValue(20);

        horizontalLayout_25->addWidget(input_dpv_scr_stress);


        verticalLayout_7->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_dpv_total_burntime = new QLabel(layoutWidget_4);
        label_dpv_total_burntime->setObjectName(QStringLiteral("label_dpv_total_burntime"));
        label_dpv_total_burntime->setFont(font2);

        horizontalLayout_26->addWidget(label_dpv_total_burntime);

        input_dpv_total_burntime = new QSpinBox(layoutWidget_4);
        input_dpv_total_burntime->setObjectName(QStringLiteral("input_dpv_total_burntime"));
        sizePolicy.setHeightForWidth(input_dpv_total_burntime->sizePolicy().hasHeightForWidth());
        input_dpv_total_burntime->setSizePolicy(sizePolicy);
        input_dpv_total_burntime->setMinimumSize(QSize(56, 0));
        input_dpv_total_burntime->setMaximumSize(QSize(56, 16777215));
        input_dpv_total_burntime->setLayoutDirection(Qt::LeftToRight);
        input_dpv_total_burntime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_dpv_total_burntime->setMinimum(100);
        input_dpv_total_burntime->setMaximum(900);
        input_dpv_total_burntime->setSingleStep(0);
        input_dpv_total_burntime->setValue(200);

        horizontalLayout_26->addWidget(input_dpv_total_burntime);


        verticalLayout_7->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_dpv_tow = new QLabel(layoutWidget_4);
        label_dpv_tow->setObjectName(QStringLiteral("label_dpv_tow"));
        label_dpv_tow->setFont(font2);

        horizontalLayout_27->addWidget(label_dpv_tow);

        input_dpv_tow = new QSpinBox(layoutWidget_4);
        input_dpv_tow->setObjectName(QStringLiteral("input_dpv_tow"));
        sizePolicy.setHeightForWidth(input_dpv_tow->sizePolicy().hasHeightForWidth());
        input_dpv_tow->setSizePolicy(sizePolicy);
        input_dpv_tow->setMinimumSize(QSize(56, 0));
        input_dpv_tow->setMaximumSize(QSize(56, 16777215));
        input_dpv_tow->setLayoutDirection(Qt::LeftToRight);
        input_dpv_tow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_dpv_tow->setMinimum(5);
        input_dpv_tow->setMaximum(60);
        input_dpv_tow->setValue(30);

        horizontalLayout_27->addWidget(input_dpv_tow);


        verticalLayout_7->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_dpv_speed = new QLabel(layoutWidget_4);
        label_dpv_speed->setObjectName(QStringLiteral("label_dpv_speed"));
        label_dpv_speed->setFont(font2);

        horizontalLayout_28->addWidget(label_dpv_speed);

        input_dpv_speed = new QSpinBox(layoutWidget_4);
        input_dpv_speed->setObjectName(QStringLiteral("input_dpv_speed"));
        sizePolicy.setHeightForWidth(input_dpv_speed->sizePolicy().hasHeightForWidth());
        input_dpv_speed->setSizePolicy(sizePolicy);
        input_dpv_speed->setMinimumSize(QSize(56, 0));
        input_dpv_speed->setMaximumSize(QSize(56, 24));
        input_dpv_speed->setLayoutDirection(Qt::LeftToRight);
        input_dpv_speed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_dpv_speed->setMinimum(10);
        input_dpv_speed->setMaximum(99);
        input_dpv_speed->setValue(45);

        horizontalLayout_28->addWidget(input_dpv_speed);


        verticalLayout_7->addLayout(horizontalLayout_28);

        tabWidget->addTab(tab_settings, QString());
        tab_about = new QWidget();
        tab_about->setObjectName(QStringLiteral("tab_about"));
        text_disclaimer = new QTextBrowser(tab_about);
        text_disclaimer->setObjectName(QStringLiteral("text_disclaimer"));
        text_disclaimer->setGeometry(QRect(10, 350, 671, 111));
        frame_2 = new QFrame(tab_about);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 321, 161));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget_5 = new QWidget(frame_2);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 10, 291, 132));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        label_4 = new QLabel(layoutWidget_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_30->addWidget(label_4);

        label_10 = new QLabel(layoutWidget_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(30, 0));
        label_10->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_30->addWidget(label_10);

        label_16 = new QLabel(layoutWidget_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(100, 0));
        label_16->setMaximumSize(QSize(1000009, 16777215));
        label_16->setLayoutDirection(Qt::LeftToRight);
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_30->addWidget(label_16);


        verticalLayout_4->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        label_5 = new QLabel(layoutWidget_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_31->addWidget(label_5);

        label_12 = new QLabel(layoutWidget_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(30, 0));
        label_12->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_31->addWidget(label_12);

        label_17 = new QLabel(layoutWidget_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(100, 0));
        label_17->setMaximumSize(QSize(1000009, 16777215));
        label_17->setLayoutDirection(Qt::LeftToRight);
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_31->addWidget(label_17);


        verticalLayout_4->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_32->addWidget(label_6);

        label_13 = new QLabel(layoutWidget_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(30, 0));
        label_13->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_32->addWidget(label_13);

        label_18 = new QLabel(layoutWidget_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(100, 0));
        label_18->setMaximumSize(QSize(1000009, 16777215));
        label_18->setLayoutDirection(Qt::LeftToRight);
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_18->setOpenExternalLinks(true);

        horizontalLayout_32->addWidget(label_18);


        verticalLayout_4->addLayout(horizontalLayout_32);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        label_7 = new QLabel(layoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_33->addWidget(label_7);

        label_14 = new QLabel(layoutWidget_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(30, 0));
        label_14->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_33->addWidget(label_14);

        label_19 = new QLabel(layoutWidget_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(100, 0));
        label_19->setMaximumSize(QSize(1000009, 16777215));
        label_19->setLayoutDirection(Qt::LeftToRight);
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_33->addWidget(label_19);


        verticalLayout_4->addLayout(horizontalLayout_33);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        label_8 = new QLabel(layoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(100, 0));
        label_8->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_34->addWidget(label_8);

        label_15 = new QLabel(layoutWidget_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(30, 0));
        label_15->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_34->addWidget(label_15);

        label_20 = new QLabel(layoutWidget_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(100, 0));
        label_20->setMaximumSize(QSize(1000009, 16777215));
        label_20->setLayoutDirection(Qt::LeftToRight);
        label_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_34->addWidget(label_20);


        verticalLayout_4->addLayout(horizontalLayout_34);

        frame_3 = new QFrame(tab_about);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(350, 10, 331, 161));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget_51 = new QWidget(frame_3);
        layoutWidget_51->setObjectName(QStringLiteral("layoutWidget_51"));
        layoutWidget_51->setGeometry(QRect(20, 10, 291, 132));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_51);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        label_11 = new QLabel(layoutWidget_51);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_35->addWidget(label_11);

        label_21 = new QLabel(layoutWidget_51);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(30, 0));
        label_21->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_35->addWidget(label_21);

        label_22 = new QLabel(layoutWidget_51);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(100, 0));
        label_22->setMaximumSize(QSize(1000009, 16777215));
        label_22->setLayoutDirection(Qt::LeftToRight);
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_35->addWidget(label_22);


        verticalLayout_8->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        label_23 = new QLabel(layoutWidget_51);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMinimumSize(QSize(100, 0));
        label_23->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_36->addWidget(label_23);

        label_24 = new QLabel(layoutWidget_51);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(30, 0));
        label_24->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_36->addWidget(label_24);

        label_25 = new QLabel(layoutWidget_51);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(100, 0));
        label_25->setMaximumSize(QSize(1000009, 16777215));
        label_25->setLayoutDirection(Qt::LeftToRight);
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_36->addWidget(label_25);


        verticalLayout_8->addLayout(horizontalLayout_36);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        label_26 = new QLabel(layoutWidget_51);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMinimumSize(QSize(100, 0));
        label_26->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_37->addWidget(label_26);

        label_27 = new QLabel(layoutWidget_51);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(30, 0));
        label_27->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_37->addWidget(label_27);

        label_28 = new QLabel(layoutWidget_51);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMinimumSize(QSize(100, 0));
        label_28->setMaximumSize(QSize(1000009, 16777215));
        label_28->setLayoutDirection(Qt::LeftToRight);
        label_28->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_28->setOpenExternalLinks(true);

        horizontalLayout_37->addWidget(label_28);


        verticalLayout_8->addLayout(horizontalLayout_37);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        label_32 = new QLabel(layoutWidget_51);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMinimumSize(QSize(100, 0));
        label_32->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_39->addWidget(label_32);

        label_33 = new QLabel(layoutWidget_51);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setMinimumSize(QSize(30, 0));
        label_33->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_39->addWidget(label_33);

        label_34 = new QLabel(layoutWidget_51);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMinimumSize(QSize(100, 0));
        label_34->setMaximumSize(QSize(1000009, 16777215));
        label_34->setLayoutDirection(Qt::LeftToRight);
        label_34->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_39->addWidget(label_34);


        verticalLayout_8->addLayout(horizontalLayout_39);

        tabWidget->addTab(tab_about, QString());
        label_zero_gravity_logo = new QLabel(centralWidget);
        label_zero_gravity_logo->setObjectName(QStringLiteral("label_zero_gravity_logo"));
        label_zero_gravity_logo->setGeometry(QRect(210, 630, 331, 51));
        label_zero_gravity_logo->setPixmap(QPixmap(QString::fromUtf8(":/icons/zero_gravity_logo.png")));
        label_zero_gravity_logo->setScaledContents(true);
        label_logo = new QLabel(centralWidget);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(20, 10, 70, 70));
        sizePolicy.setHeightForWidth(label_logo->sizePolicy().hasHeightForWidth());
        label_logo->setSizePolicy(sizePolicy);
        label_logo->setMinimumSize(QSize(70, 70));
        label_logo->setMaximumSize(QSize(60, 60));
        QFont font3;
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_logo->setFont(font3);
        label_logo->setText(QStringLiteral(""));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/icons/gue_logo.png")));
        label_logo->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 20, 521, 41));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DPV diveplanner", Q_NULLPTR));
        label_gasSupply->setText(QApplication::translate("MainWindow", "Gas supply", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Doubles", Q_NULLPTR));
        label_cylindersize_doubles->setText(QApplication::translate("MainWindow", "Cylinder size", Q_NULLPTR));
        label_cylindersize_doubles_suffix->setText(QApplication::translate("MainWindow", "liter", Q_NULLPTR));
        label_pressure_doubles->setText(QApplication::translate("MainWindow", "Fill pressure", Q_NULLPTR));
        label_pressure_doubles_suffix->setText(QApplication::translate("MainWindow", "bar", Q_NULLPTR));
        label_usable_doubles->setText(QApplication::translate("MainWindow", "Usable gas on the way IN", Q_NULLPTR));
        label_usable_doubles_suffix->setText(QApplication::translate("MainWindow", "bar", Q_NULLPTR));
        label_header_stages->setText(QApplication::translate("MainWindow", "Stages", Q_NULLPTR));
        label_cylindersize_stages->setText(QApplication::translate("MainWindow", "Cylinder size", Q_NULLPTR));
        label_cylindersize_stages_suffix->setText(QApplication::translate("MainWindow", "liter", Q_NULLPTR));
        label_pressure_stages->setText(QApplication::translate("MainWindow", "Fill pressure", Q_NULLPTR));
        label_pressure_stages_suffix->setText(QApplication::translate("MainWindow", "bar", Q_NULLPTR));
        label_usable_stages->setText(QApplication::translate("MainWindow", "Usable gas on the way IN", Q_NULLPTR));
        label_usable_stages_suffix->setText(QApplication::translate("MainWindow", "bar", Q_NULLPTR));
        label_amount_stages->setText(QApplication::translate("MainWindow", "Amount", Q_NULLPTR));
        label_amount_stages_suffix->setText(QString());
        label_header_diveDetails->setText(QApplication::translate("MainWindow", "Dive details", Q_NULLPTR));
        label_avg_depth->setText(QApplication::translate("MainWindow", "Average depth", Q_NULLPTR));
        label_avg_depth_suffix->setText(QApplication::translate("MainWindow", "meter", Q_NULLPTR));
        label_dpv_in_type->setText(QApplication::translate("MainWindow", "DPV calculated in ", Q_NULLPTR));
        input_dpv_in_type->clear();
        input_dpv_in_type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Minutes", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Meters", Q_NULLPTR)
        );
        label_dpv_triggertime->setText(QApplication::translate("MainWindow", "DPV trigger time going IN", Q_NULLPTR));
        label_dpv_triggertime_suffix->setText(QApplication::translate("MainWindow", "minutes", Q_NULLPTR));
        label_dpv_triggerdistance->setText(QApplication::translate("MainWindow", "DPV trigger distance going IN", Q_NULLPTR));
        label_dpv_triggerdistance_suffix->setText(QApplication::translate("MainWindow", "meters", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_properties), QApplication::translate("MainWindow", "Dive properties", Q_NULLPTR));
        label_gasreserve_minutes_text->setText(QApplication::translate("MainWindow", "Estimated maximum dive time at end penetration (stress scr, swim)", Q_NULLPTR));
        label_gasreserve_minutes_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_gasreserve_minutes_suffix->setText(QApplication::translate("MainWindow", "Minutes", Q_NULLPTR));
        label_header_estimats->setText(QApplication::translate("MainWindow", "Estimates", Q_NULLPTR));
        label_dpv_penetration_text->setText(QApplication::translate("MainWindow", "Estimated DPV penetration", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_dpv_penetration_value->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_dpv_penetration_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_dpv_penetration_suffix->setText(QApplication::translate("MainWindow", "Meter", Q_NULLPTR));
        label_triggertime_text->setText(QApplication::translate("MainWindow", "Total estimated DPV trigger time", Q_NULLPTR));
        label_triggertime_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_triggertime_suffix->setText(QApplication::translate("MainWindow", "Minutes", Q_NULLPTR));
        label_divetime_text->setText(QApplication::translate("MainWindow", "Total estimated dive time", Q_NULLPTR));
        label_divetime_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_divetime_suffix->setText(QApplication::translate("MainWindow", "Minutes", Q_NULLPTR));
        label_gas_reserve_text->setText(QApplication::translate("MainWindow", "Estimated swim penetration", Q_NULLPTR));
        label_swim_penetration_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_swim_penetration_suffix->setText(QApplication::translate("MainWindow", "Meter", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Gas left in doubles at end penetration", Q_NULLPTR));
        label_gas_left_in_doubles_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Bar", Q_NULLPTR));
        label_dpvplan_header->setText(QApplication::translate("MainWindow", "DPV plan", Q_NULLPTR));
        label_tow_text->setText(QApplication::translate("MainWindow", "GAS needed in doubles in case of DPV failure (tow)", Q_NULLPTR));
        label_tow_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_tow_suffix->setText(QApplication::translate("MainWindow", "Bar", Q_NULLPTR));
        label_swim_text->setText(QApplication::translate("MainWindow", "GAS needed in doubles in case of all DPV's failure (swim)", Q_NULLPTR));
        label_swim_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_swim_suffix->setText(QApplication::translate("MainWindow", "Bar", Q_NULLPTR));
        label_oog_text->setText(QApplication::translate("MainWindow", "GAS needed in doubles when using DPV without stages", Q_NULLPTR));
        label_oog_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_oog_suffix->setText(QApplication::translate("MainWindow", "Bar", Q_NULLPTR));
        label_tow_no_stages_text->setText(QApplication::translate("MainWindow", "GAS needed in doubles when towing without stages", Q_NULLPTR));
        label_tow_no_stages_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_tow_no_stages_suffix->setText(QApplication::translate("MainWindow", "Bar", Q_NULLPTR));
        label_no_dpv_half_stages_text->setText(QApplication::translate("MainWindow", "GAS needed in doubles with all DPV broken and only 50% of stages", Q_NULLPTR));
        label_no_dpv_half_stages_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_no_dpv_half_stages_suffix->setText(QApplication::translate("MainWindow", "Bar", Q_NULLPTR));
        label_no_dpv_no_stages_text->setText(QApplication::translate("MainWindow", "GAS needed in doubles when all DPV's are broken and without stages", Q_NULLPTR));
        label_no_dpv_no_stages_value->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_no_dpv_no_stages_suffix->setText(QApplication::translate("MainWindow", "Bar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_plan), QApplication::translate("MainWindow", "Dive plan", Q_NULLPTR));
        label_header_global_settings->setText(QApplication::translate("MainWindow", "Global settings", Q_NULLPTR));
        label_scr->setText(QApplication::translate("MainWindow", "Surface Consumtion Rate", Q_NULLPTR));
        label_scr_stress->setText(QApplication::translate("MainWindow", "Surface Consumtion Rate in stress", Q_NULLPTR));
        label_swim_speed->setText(QApplication::translate("MainWindow", "Swim speed in meters per minute", Q_NULLPTR));
        label_header_dpv_settings->setText(QApplication::translate("MainWindow", "DPV settings", Q_NULLPTR));
        label_dpv_scr->setText(QApplication::translate("MainWindow", "DPV Surface Consumtion Rate", Q_NULLPTR));
        label_dpv_scr_stress->setText(QApplication::translate("MainWindow", "DPV Surface Consumtion Rate in stress", Q_NULLPTR));
        label_dpv_total_burntime->setText(QApplication::translate("MainWindow", "DPV total burntime in minutes", Q_NULLPTR));
        label_dpv_tow->setText(QApplication::translate("MainWindow", "DPV tow speed in meters per minute", Q_NULLPTR));
        label_dpv_speed->setText(QApplication::translate("MainWindow", "DPV speed in meters per minute", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_settings), QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        text_disclaimer->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">Disclaimer:</span></p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This application does not in any way replace your own critical thinking and manual calculations. Author(s), GUE and ZeroGravity can not be held responsible for any incidents/accidents as a result of diving the suggested diveplan by this application.</p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Author", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Flip Vernooij", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Version", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "0.2 ALPHA", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "License", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "<a href=\"https://www.gnu.org/licenses/gpl-3.0.en.html\">GPLv3</a>", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Website", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "<a href=\"https://www.squad.nl\">www.squad.nl</a>", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Thanks too", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Chris Le Maillot", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Bug reports", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "<a href=\"mailto:flip@squad.nl?subject=Diveplanner 0.2 Bug\">flip@squad.nl</a>", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Changeslist", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "--", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Source code", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "<a href=\"https://github.com/FlipVernooij/DPV_diveplanner\">Github</a>", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "Donate", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "<a href=\"https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=LPPALYYJJ2FMC&lc=NL&item_name=Diveplanner%20pizza%20donation&item_number=DiveplannerDonation&currency_code=EUR&bn=PP%2dDonationsBF%3abtn_donateCC_LG%2egif%3aNonHosted\">Paypal</a>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_about), QApplication::translate("MainWindow", "About", Q_NULLPTR));
        label_zero_gravity_logo->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Cave DPV GAS Management", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
