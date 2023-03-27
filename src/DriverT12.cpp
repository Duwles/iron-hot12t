#include <Arduino.h>
#include "DriverT12.h"

DriverT12::DriverT12(int mosfet_gate_pin, int heat_led_pin, int temp_sens_adc_pin)
{
    _heater_pin  = mosfet_gate_pin;
    _pwonled_pin = heat_led_pin;
    _tempadc_pin = temp_sens_adc_pin;

}
