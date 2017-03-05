#ifndef GASSUPPLY_H
#define GASSUPPLY_H
#include "gasvolume.h"
#include <vector>


class GasSupply{
    GasVolume _doubles;
    std::vector<GasVolume> _stages;

public:
    GasSupply();
     int get_total_liters();
     int get_bars_in_doubles();
     int get_liters_in_doubles();
     int get_num_stages();
     int get_liters_in_stages();
     int get_reserved_liters_in_doubles();
     int get_reserved_bars_in_doubles();
     int get_reserved_liters_in_stages();
     int get_total_reserved_liters();
     int get_penetration_liters_in_doubles();
     int get_penetration_liters_in_stages();
     int get_total_penetration_liters();

     int set_doubles( int cylinder_size,  int bars,  int pernetration_bars);
     int add_stage( int cylinder_size,  int bars,  int pernetration_bars);

};

#endif // GASSUPPLY_H
