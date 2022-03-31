#include "readValue.h"
int buffer = 3;
int readOuts = 5;



int readPotValue(byte analogPin){

    for(int i = 0; i < buffer; i++){
        analogRead(analogPin);
    }
}