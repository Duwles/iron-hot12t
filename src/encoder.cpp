#include <Arduino.h>
#include "encoder.hpp"


Encoder::Encoder(int pin1, int pin2)
{
    _clock_pin = pin2;
    _data_pin = pin1;

    pinMode(_data_pin,  INPUT_PULLUP);
    pinMode(_clock_pin, INPUT_PULLUP);
}


void Encoder::setButton(int pin)
{
    _button_pin = pin;
    
    pinMode(_button_pin, INPUT_PULLUP);
}


void Encoder::handleISR()
{    
    int state_a = digitalRead(_data_pin);
    int state_b = digitalRead(_clock_pin);

    if (state_a == state_b) {
        _position++;
    } 
    else {
        _position--;
    }
}
