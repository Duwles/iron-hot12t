#include <Arduino.h>
#include <Wire.h>
#include "system.h"


void GPIO_Init()
{
  // Tilt switch of iron tip. ISR
    pinMode(TILTSW_PIN, INPUT_PULLUP);       

  // Encoder pinout. Pin CLK is isr triger.
    pinMode(ENCDT_PIN,  INPUT_PULLUP);
    pinMode(ENCCL_PIN,  INPUT_PULLUP);
    pinMode(ENCPB_PIN,  INPUT_PULLUP);

  // Heater pins
    pinMode(HEATER_PIN, OUTPUT); 
    pinMode(HEATON_PIN, OUTPUT); 
    digitalWrite(HEATER_PIN, LOW);
    digitalWrite(HEATON_PIN, LOW);

  // Power state LED
    pinMode(PWRLED_PIN, OUTPUT);
    digitalWrite(PWRLED_PIN, LOW);
}


void pwrledOn()
{
    digitalWrite(PWRLED_PIN, HIGH);
}


void TW_Init() 
{
    Wire.begin();
}


void Lcd_Init()
{
    lcd.backlight();
    lcd.init();
    lcd.clear();
    lcd.setCursor(0, 0);
}


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

