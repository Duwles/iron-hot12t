#ifndef SYSTEM_H
#define SYSTEM_H
#include <Arduino.h>
#include <TimerOne.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "ConfigGPIO.h"
#pragma once


void GPIO_Init();
void pwrledOn();
void TW_Init();
void Lcd_Init();
void UART_Init(unsigned long baud_rate);



class system {
public:
    const long R1 = 47000;
    const long R2 = 10000;    

    system();





private:
    uint8_t _vccvadc_pin;



};


class TempControl {
public:
    TempControl();

private:

};



extern LiquidCrystal_I2C lcd;

#endif