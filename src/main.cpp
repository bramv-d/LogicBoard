#include "main.h"

InputVariable input(0, 1, 2, 2);
void setup() {
  Serial.begin(9600);
}

void loop() {
  input.update();
}