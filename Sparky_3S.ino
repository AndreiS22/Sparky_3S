#include "hardware_init.h"
#include "motors.h"
#include "turbina.h"
#include "citire_snz.h"
#include "line_black.h"

void setup() {
  
 hardwareInit();
 wait_for_start();
    changeThrottle(force);
   delay(4500);
}


void loop()
{
  //set_motors(200, 200);
  //TCCR0B = TCCR0B & B11111000 | B00000001; // for PWM frequency of 7812.50 Hz
   /*set_motors(50, 50);
   delay(2000);
   set_motors(255, 255);
   delay(2000);
   set_motors(-255, -255);
   delay(2000);*/
    follow();
   wait_for_stop();
 //citire_senzori();
}







