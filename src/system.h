#ifndef SYSTEM_H
#define SYSTEM_H
#include <Arduino.h>
#pragma once

void GPIO_Init();
void TW_Init();
void Lcd_Init();
void UART_Init(unsigned long baud_rate);



class system
{
public:
    system();

private:

};


class TempControl {
public:
    TempControl();

private:

};


#endif