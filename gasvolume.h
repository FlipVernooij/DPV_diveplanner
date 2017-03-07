#ifndef GASVOLUME_H
#define GASVOLUME_H


class GasVolume
{
     int _cylinder_size;
     int _total_liters;
     int _penetration_liters;

    public:
        GasVolume(void);

        GasVolume( int cylinder_size,  int total_bars,  int penetration_bars);

         int get_cylinder_size();

         int get_liters();

         int get_bars();

         int get_penetration_liters();

         int get_penetration_bars();

         int get_reserved_liters();

         int get_reserved_bars();

         int set_cylinder_size( int liters);

         int set_penetration_liters( int liters);

         int set_penetration_bars( int bars);

         int set_liters( int liters);

         int set_bars( int bars);

         int bars_2_liters( int bars);

         int liters_2_bars( int liters);

        static  int bars_2_liters( int bars,  int cylinder_size);

        static  int liters_2_bars( int liters,  int cylinder_size);
    
        static  int liters_2_minutes( int liters,  int avg_depth,  int scr);
    
        static  int minute_2_liters( int minutes,  int avg_depth,  int scr);

        static int meters_2_minutes( int meters, int speed);

        static  int liters_2_meters( int liters,  int avg_depth,  int scr, int speed);

        static  int meters_2_liters( int meters,  int avg_depth,  int scr, int speed);
};

#endif // GASVOLUME_H
