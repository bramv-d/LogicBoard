#include "inputVariable.h"

InputVariable::InputVariable(byte input, byte logic, byte comp, byte output)
{
        input_pin = input;
        logic_pin = logic;
        comp_pin = comp;
        output_pin = output;
        pinMode(output_pin, OUTPUT);

}

int InputVariable::readVal(byte pin){
    int value = 0;
    
    for(int i = 0; i < readOuts; i++){
        value +=  analogRead(pin);
    }
    return value / readOuts;
};

int InputVariable::valToLogic(int value){
  int dividerVal = 1023 / 4;

  if (value>=0 && value<=dividerVal){
    return lower;
  }
  else if (value>=dividerVal && value<=dividerVal *2){
    return notEquals;
  }
  else if (value>=dividerVal*2 && value<=dividerVal *3){
    return equals;
  }
  else if (value>=dividerVal*3 && value<=dividerVal *4){
    return higher;
  }
  else{
    return lower;
  }
}

bool InputVariable::compare(){

  if(valToLogic(logic_value) == equals && (input_value - buffer < comp_value && input_value + buffer > comp_value )){
    return true;
  } else if(valToLogic(logic_value) == notEquals && (input_value - buffer > comp_value || input_value + buffer < comp_value )){
    return true;
  } else if(valToLogic(logic_value) == higher && input_value > comp_value){
    return true;
  } else if(valToLogic(logic_value) == lower && input_value < comp_value){
    return true;
  } else{
    return false;
  } 
}

void InputVariable::updateOutput(){
    bool compare_value = compare();
    if(compare_value != prev_output_value){
        Serial.println(compare_value);
        digitalWrite(output_pin, compare_value);
        prev_output_value = compare_value;
    }
}

void InputVariable::update(){
    int new_input_value = readVal(input_pin);
    if(input_value - buffer > new_input_value || input_value + buffer < new_input_value){
        input_value = new_input_value;
        Serial.println(input_value);
    }
    logic_value = readVal(logic_pin);
    comp_value = readVal(comp_pin);
    updateOutput();
}