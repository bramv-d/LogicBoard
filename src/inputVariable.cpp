#include "inputVariable.h"
int readOuts = 3;

InputVariable::InputVariable(byte pin)
{
    self_pin = pin;
}

int InputVariable::readValue(){
    int value = 0;
    for(int i = 0; i < readOuts; i++){
        value +=  analogRead(self_pin);
    }
    return value / readOuts;
};