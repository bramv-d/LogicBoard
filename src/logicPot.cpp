#include "logicPot.h"

int logicPot(int buttonValue){
  int dividerVal = 1023 / 4;

  if (buttonValue>=0 && buttonValue<=dividerVal){
    return equals;
  }
  else if (buttonValue>=dividerVal && buttonValue<=dividerVal *2){
    return notEquals;
  }
  else if (buttonValue>=dividerVal*2 && buttonValue<=dividerVal *3){
    return higher;
  }
  else if (buttonValue>=dividerVal*3 && buttonValue<=dividerVal *4){
    return lower;
  }
}