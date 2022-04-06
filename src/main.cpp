#include "main.h"

InputVariable row1(0, 1, 2, 2); //Analog input, analog logic, analog compare, digital output
InputVariable row2(3, 4, 5, 3);
InputVariable row3(6, 7, 8, 4);
InputVariable row4(9, 10, 11, 5);


void setup() {
  Serial.begin(9600);
}

void loop() {
  row1.update();
  row2.update();
  row3.update();
  row4.update();
  
}