#include <Arduino.h>
#include <TimerOne.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include "system.h"




volatile unsigned long idleTimer;
volatile long position;


LiquidCrystal_I2C lcd(0x24, 16, 2);


void ISR_TILTSW() 
{
    idleTimer = 0;
}


void ISR_ENCODER() 
{
    int state_a = digitalRead(ENCDT_PIN);
    int state_b = digitalRead(ENCCL_PIN);

    if (state_a != state_b) {
        position++;
    } 
    else if (state_a == state_b)     {
        position--;
    }
    else {

    }
}

void idleCounter() 
{
    idleTimer++;
}

void setup() 
{
  // Initialize GPIO
    GPIO_Init();

  // Start Rimer1 z czestotliwoscia ok 1 sec i wywolanie funkcji idleCounter()
    Timer1.initialize(1000000);
    Timer1.attachInterrupt(idleCounter);

  // Start I2C bus
    TW_Init();  

  // Start Lcd on I2C
    Lcd_Init();

  // Start UART'a
    UART_Init(9600);

  // Start interrupt service
    attachInterrupt(TILTSW_PIN, ISR_TILTSW, CHANGE);
    attachInterrupt(ENCDT_PIN, ISR_ENCODER, CHANGE);
    sei();

    pwrledOn();
} // setup();



void loop() 
{

} // loop();
