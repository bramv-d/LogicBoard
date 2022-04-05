#include "main.h"

/*

1. Read input
1. Update every array
3. Check if statement
4. Compare input to if statement
5. Create Output
6. Output to output pin

*/

InputVariable inputVariable(0);
InputVariable inputVariable1(2);

void setup() {
  // put your setup code here to run once:
  Serial.begin(9600);
  // put your setup code here,dwadweawdawda to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(inputVariable.readValue());
  // Serial.println(inputVariable1.readValue());
  Serial.println(logicPot(inputVariable1.readValue()) == equals);
}