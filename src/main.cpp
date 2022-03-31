#include <Arduino.h>


/*

1. Update every row
2. Compare input to if statement
3. Create Output
4. Output to output pin


*/


int firstRow[8] = {A0, 0, A1, 0, A2, 0, A3, 0}; //pin in, in value ,if pin, if value, pin compare, compare value , pin out, out value

void setup() {
  // put your setup code here to run once:
  Serial.begin(9600);
  // put your setup code here,dwadweawdawda to run once:
  // bram stinkt
  // hmm
  // jij ook
}

//prototypes
void readSomething(byte pin);
void checkIf(byte pin);
void updateRowValues(int row[]);


void loop() {
  // put your main code here, to run repeatedly:

  updateRowValues(firstRow);

  for(int i = 0; i < 8; i++)
  {
    Serial.println(firstRow[i]);
  }
  delay(10000);

}



void updateRowValues(int row[]){
  row[1] = analogRead(row[0]); //reads value from array place 0 and places it in place 1
  row[3] = analogRead(row[2]);
  row[5] = analogRead(row[4]);
  row[7] = analogRead(row[6]);
}




void checkIf(byte pin){
  int buttonValue = analogRead(pin);
  if (buttonValue>=0 && buttonValue<=204){

  }
  else if (buttonValue>=205 && buttonValue<=409){
    
  }
  else if (buttonValue>=410 && buttonValue<=604){
    
  }
  else if (buttonValue>=605 && buttonValue<=809){
    
  }
  else if (buttonValue>=810 && buttonValue<=1023){
    
  }

}

/*
void readSomething(byte pin){
  int buttonValue = analogRead(pin);  //Read in the button value
  Serial.println(buttonValue);
}
*/