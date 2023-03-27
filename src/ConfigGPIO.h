#ifndef __CONFIG_GPIO_H__
#define __CONFIG_GPIO_H__
#include <Arduino.h>
#pragma once

// Tilt switch from iron tip. ISR trigger.
#define TILTSW_PIN  2 

// Data pin is ISR trigger.
#define ENCDT_PIN   3   
#define ENCCL_PIN  4
#define ENCPB_PIN   5

// BC547 Base pwm signal.
#define HEATER_PIN  6
// Heating On LED.
#define HEATON_PIN  7


// Power signal state led.
#define PWRLED_PIN  8

#endif //! __CONFIG_GPIO_H__
