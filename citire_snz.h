#ifndef citire_snz
#define citire_snz

#include "hardware_init.h"
#include "motors.h"
#include "turbina.h"

void citire(){
  s1 = analogRead(A0);
  s2 = analogRead(A1);
  s3 = analogRead(A2);
  s4 = analogRead(A3);
  s5 = analogRead(A4);
  s6 = analogRead(A5);
  s7 = analogRead(A11);
  s8 = analogRead(A10);
  s9 = analogRead(A9);
  s10 = analogRead(A8);
  s11 = analogRead(A6);
  s12 = digitalRead(3);
  sd = digitalRead(1);
 
}
void citire_senzori(){
 
  citire();
  Serial.print(s1);
  Serial.print("    ");
  Serial.print(s2);
  Serial.print("    ");
  Serial.print(s3);
  Serial.print("    ");
  Serial.print(s4);
  Serial.print("    ");
  Serial.print(s5);
  Serial.print("    ");
  Serial.print(s6);
  Serial.print("    ");
  Serial.print(s7);
  Serial.print("    ");
  Serial.print(s8);
  Serial.print("    ");
  Serial.print(s9);
  Serial.print("    ");
  Serial.print(s10);
  Serial.print("    ");
  Serial.print(s11);
  Serial.print("    ");
  Serial.print(s12);
  Serial.print("    ");
  Serial.println(sd);
}

void wait_for_start() {

  while(start == 0){
       start = digitalRead(telecom);
  }

}

void wait_for_stop(){
  start = digitalRead(telecom);
  while(start == 0){
      set_motors(0, 0);
      changeThrottle(0);
  }
    
}

#endif 

