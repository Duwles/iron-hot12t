#include <Arduino.h>
#include "system.h"


void GPIO_Init()
{

}


void TW_Init()
{}


void Lcd_Init()
{}


void UART_Init(unsigned long baud_rate)
{
    Serial.begin(baud_rate);
    Serial.print("Initialized.\t");
    Serial.println(millis());
}


system::system()
{

}


TempControl::TempControl()
{

}

