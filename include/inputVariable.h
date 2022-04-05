#pragma once
#include <Arduino.h>
class InputVariable{
    private:
        byte self_pin;
        int prevValue = 0;
    public:
        InputVariable(byte pin);
        int readValue();
};