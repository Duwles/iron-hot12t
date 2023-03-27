#ifndef __ENCODER_HPP__
#define __ENCODER_HPP__
#include <Arduino.h>

#pragma once


class Encoder {
public:
    Encoder(int pin1, int pin2);

    void setButton(int pin);

    void handleISR();

private:
    uint8_t _clock_pin;
    uint8_t _data_pin;
    uint8_t _button_pin;

    volatile int32_t _position;
};


#endif // !__ENCODER_HPP__
