#ifndef _LSA_H 
#define _LSA_H 

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/adc.h"
#include "esp_adc_cal.h"


esp_err_t enable_lsa() ;
int get_readings_lsa() ;

#endif 
