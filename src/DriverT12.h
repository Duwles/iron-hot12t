#ifndef __DRIVERT12_H__
#define __DRIVERT12_H__
#include <Arduino.h>
#pragma once

class DriverT12
{
public:
    DriverT12(int mosfet_gate_pin, int heat_led_pin, int temp_sens_adc_pin);
    

private:
    uint8_t _heater_pin;
    uint8_t _tempadc_pin;
    uint8_t _pwonled_pin;
};

#endif // ! __DRIVERT12_H__