#pragma once
#include <Arduino.h>
class InputVariable{
    private:
        byte input_pin;
        byte logic_pin;
        byte comp_pin;
        byte output_pin;
        int input_value = 0;
        int logic_value = 0;
        int comp_value = 0;
        bool prev_output_value = false;

        int readOuts = 3;
        int buffer = 20;


        enum logicOperators {
            equals,
            notEquals,
            higher,
            lower
        };
        int readVal(byte pin);
        int valToLogic(int value);
        bool compare();
        void updateOutput();

    public:
        InputVariable(byte input, byte logic, byte comp, byte led);
        void update();
};