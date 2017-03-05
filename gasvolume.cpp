#include <math.h>
#include "gasvolume.h"

GasVolume::GasVolume(void){
}

GasVolume::GasVolume( int cylinder_size,  int total_bars,  int penetration_bars){
    this->set_cylinder_size(cylinder_size);
    this->set_bars(total_bars);
    this->set_penetration_bars(penetration_bars);
}


 int GasVolume::get_cylinder_size(){
    return this->_cylinder_size;
}

 int GasVolume::get_liters(){
    return this->_total_liters;
}

 int GasVolume::get_bars(){
    return this->liters_2_bars(this->_total_liters);
}

 int GasVolume::get_penetration_liters(){
    return this->_penetration_liters;
}

 int GasVolume::get_penetration_bars(){
    return this->liters_2_bars(this->_penetration_liters);
}

 int GasVolume::get_reserved_liters(){
    return this->_total_liters - this->_penetration_liters;
}

 int GasVolume::get_reserved_bars(){
    return this->liters_2_bars(this->get_reserved_liters());
}

 int GasVolume::set_cylinder_size( int liters){
    this->_cylinder_size = liters;
    return this->get_cylinder_size();
}

 int GasVolume::set_liters( int liters){
    this->_total_liters = liters;
    return this->get_liters();
}

 int GasVolume::set_bars( int bars){
    this->set_liters(this->bars_2_liters(bars));
    return this->get_bars();
}

 int GasVolume::set_penetration_liters( int liters){
    this->_penetration_liters = liters;
    return this->get_penetration_liters();
}

 int GasVolume::set_penetration_bars( int bars){
    this->set_penetration_liters(this->bars_2_liters(bars));
    return this->get_penetration_bars();
}


 int GasVolume::liters_2_bars( int liters){
    return GasVolume::liters_2_bars(liters, this->_cylinder_size);
}

 int GasVolume::bars_2_liters( int bars){
    return GasVolume::bars_2_liters(bars, this->_cylinder_size);
}

 int GasVolume::liters_2_bars( int liters,  int cylinder_size){
    return static_cast< int> (floor(liters / cylinder_size));
}

 int GasVolume::bars_2_liters( int bars,  int cylinder_size){
    return static_cast< int> (ceil(bars * cylinder_size));
}

 int GasVolume::liters_2_minutes( int liters,  int avg_depth,  int scr){
    int liters_per_minute = (avg_depth / 10 + 1)*scr;
    return static_cast< int>(floor(liters/liters_per_minute));
}

 int GasVolume::minute_2_liters( int minutes,  int avg_depth,  int scr){
    int liters_per_minute = (avg_depth / 10 + 1)*scr;
    return static_cast<int>(floor(minutes*liters_per_minute));
}

int GasVolume::liters_2_meters( int liters,  int avg_depth,  int scr, int speed){
    return GasVolume::liters_2_minutes(liters,  avg_depth,  scr) * speed;
}

int GasVolume::meters_2_liters( int meters,  int avg_depth,  int scr, int speed){
    int minutes = static_cast<int>(ceil(meters / speed));
    return GasVolume::minute_2_liters(minutes, avg_depth, scr);
}
