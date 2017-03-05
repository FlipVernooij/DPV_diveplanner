#include "gassupply.h"
#include "gasvolume.h"

GasSupply::GasSupply() : _doubles(){}

 int GasSupply::set_doubles( int cylinder_size,  int bars,  int pernetration_bars){
    this->_doubles.set_cylinder_size(cylinder_size*2);
    this->_doubles.set_bars(bars);
    this->_doubles.set_penetration_bars(pernetration_bars);
    return this->_doubles.get_liters();
}

 int GasSupply::add_stage( int cylinder_size,  int bars,  int pernetration_bars){
    this->_stages.push_back(GasVolume(cylinder_size, bars, pernetration_bars));
    return this->get_num_stages();
}

 int GasSupply::get_bars_in_doubles(){
    return this->_doubles.get_bars();
}

 int GasSupply::get_liters_in_doubles(){
    return this->_doubles.get_liters();
}
 int GasSupply::get_num_stages(){
    return  static_cast< int>(this->_stages.size());
}
 int GasSupply::get_liters_in_stages(){
    int liters = 0;
    for(GasVolume stage : this->_stages){
        liters += stage.get_liters();
    }
    return liters;
}

 int GasSupply::get_total_liters(){
    return this->get_liters_in_doubles() + this->get_liters_in_stages();
}

 int GasSupply::get_reserved_liters_in_doubles(){
    return this->_doubles.get_reserved_liters();
}

 int GasSupply::get_reserved_bars_in_doubles(){
     return this->_doubles.get_reserved_bars();
 }

 int GasSupply::get_reserved_liters_in_stages(){
     int liters = 0;
    for(GasVolume stage : this->_stages){
        liters += stage.get_reserved_liters();
    }
    return liters;
}
 int GasSupply::get_total_reserved_liters(){
    return this->get_reserved_liters_in_doubles() + this->get_reserved_liters_in_stages();
}

 int GasSupply::get_penetration_liters_in_doubles(){
    return this->_doubles.get_penetration_liters();
}

 int GasSupply::get_penetration_liters_in_stages(){
     int liters = 0;
    for(GasVolume stage : this->_stages){
        liters += stage.get_penetration_liters();
    }
    return liters;
}

 int GasSupply::get_total_penetration_liters(){
    return this->get_penetration_liters_in_doubles() + this->get_penetration_liters_in_stages();
}
