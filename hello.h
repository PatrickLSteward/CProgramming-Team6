#ifndef HELLO_H

#define HELLO_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// define functions here
int hello_c();
int hello_e();
int hello_g();
int hello_v();
int hello_d();

//Elizabeth's functions
int add(int a, int b);
float temp_sensor_converter(int temp_sensor_value, bool *success);
float temp_c_to_f(float temp_c);
bool readings_to_temp_c_and_f_arrays(int *temp_sesnor_readings_ptr, float *temp_c_arr_ptr, float *temp_f__arr_ptr, int number_readings);

//Deepa's functions
int func_add(p,q);
int func_sub(p,q);
int func_multi(p,q);

#endif
