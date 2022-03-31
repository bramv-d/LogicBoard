#include "main.h"

/*

1. Read input
1. Update every array
3. Check if statement
4. Compare input to if statement
5. Create Output
6. Output to output pin

*/


int firstRow[8] = {A0, 0, A1, 0, A2, 0, 6, 0}; //pin in, in value ,if pin, if value, pin compare, compare value , pin out, out value
int potValues[8];

void setup() {
  // put your setup code here to run once:
  Serial.begin(9600);
  // put your setup code here,dwadweawdawda to run once:
}

//prototypes
void readSomething(byte pin);
void checkIf(byte pin);
void updateRowValues(int row[]);
void output(int row[]);


void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(logicPot(0) == equals);
  // updateRowValues(firstRow);

  updateRowValues(firstRow);

  output(firstRow);
}


void output(int row[]){ 
  digitalWrite(row[6], row[7]);
}

void updateRowValues(int row[]){
  row[1] = analogRead(row[0]); //reads value from array place 0 and places it in place 1
  row[3] = analogRead(row[2]);
  row[5] = analogRead(row[4]);
  row[7] = analogRead(row[6]);
}