/*
 * File:   main.c
 * Author: HP
 *
 * Created on 30 June, 2024, 7:34 PM
 */


#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF
void init_config(){
    init_clcd();
    init_i2c(100000);
    init_adc();
    init_digital_keypad();
    init_ds1307();
}
void main(void) {
    init_config();
    
    while(1)
    {
       clcd_print("   TIME  EV  SP",LINE1(0)); 
    }
    return;
}
