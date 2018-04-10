#ifndef motors
#define motors

#include "hardware_init.h"


void set_motors(int speedLeft, int speedRight) {
  if (speedLeft > 0) {
    digitalWrite(ain1, HIGH);
    analogWrite(pwma, speedLeft);
  } 
  else if (speedLeft <= 0) {
    digitalWrite(ain1, LOW);
    analogWrite(pwma, -speedLeft);
  }

  if (speedRight > 0) {
    digitalWrite(bin1, LOW);
    analogWrite(pwmb, speedRight);
  }
  else if(speedRight <= 0) {
    digitalWrite(bin1, HIGH);
    analogWrite(pwmb, -speedRight);
  }
}

#endif
