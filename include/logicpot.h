#pragma once
#include <Arduino.h>
enum logicOperators {
    equals,
    notEquals,
    higher,
    lower
};

int logicPot(byte analogPin);