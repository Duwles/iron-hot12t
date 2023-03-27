#include <Arduino.h>
#include "hal.hpp"

HAL::HAL()
{
}

void HAL::Init()
{
    Serial.println("HAL Init();");
}
