#ifndef line_white
#define line_white

#include "hardware_init.h"
#include "citire_snz.h"
#include "motors.h"
#include "variables.h"

uint8_t line;
uint8_t pos;

uint8_t s1_c;
uint8_t s2_c;
uint8_t s3_c;
uint8_t s4_c;
uint8_t s5_c;
uint8_t s6_c;
uint8_t s7_c;
uint8_t s8_c;
uint8_t s9_c;
uint8_t s10_c;


void read_sensors_white(){
  citire();

  if(s1 == 1) s1_c = 0;
  else s1_c = 7;

  if(s2 > pas0_w) s2_c = 0;
  else if((s2 < pas0_w) && (s2 >= pas1_w)) s2_c = 1;
  else if((s2 < pas1_w) && (s2 >= pas2_w)) s2_c = 2;
  else if((s2 < pas2_w) && (s2 >= pas3_w)) s2_c = 3;
  else if((s2 < pas3_w) && (s2 >= pas4_w)) s2_c = 4;
  else if((s2 < pas4_w) && (s2 >= pas5_w)) s2_c = 5;
  else if((s2 < pas5_w) && (s2 >= pas6_w)) s2_c = 6;
  else if((s2 < pas6_w) && (s2 >= pas7_w)) s2_c = 7;

  if(s3 > pas0_w) s3_c = 0;
  else if((s3 < pas0_w) && (s3 >= pas1_w)) s3_c = 1;
  else if((s3 < pas1_w) && (s3 >= pas3_w)) s3_c = 2;
  else if((s3 < pas3_w) && (s3 >= pas3_w)) s3_c = 3;
  else if((s3 < pas3_w) && (s3 >= pas4_w)) s3_c = 4;
  else if((s3 < pas4_w) && (s3 >= pas5_w)) s3_c = 5;
  else if((s3 < pas5_w) && (s3 >= pas6_w)) s3_c = 6;
  else if((s3 < pas6_w) && (s3 >= pas7_w)) s3_c = 7;


  if(s4 > pas0_w) s4_c = 0;
  else if((s4 < pas0_w) && (s4 >= pas1_w)) s4_c = 1;
  else if((s4 < pas1_w) && (s4 >= pas2_w)) s4_c = 2;
  else if((s4 < pas2_w) && (s4 >= pas4_w)) s4_c = 3;
  else if((s4 < pas4_w) && (s4 >= pas4_w)) s4_c = 4;
  else if((s4 < pas4_w) && (s4 >= pas5_w)) s4_c = 5;
  else if((s4 < pas5_w) && (s4 >= pas6_w)) s4_c = 6;
  else if((s4 < pas6_w) && (s4 >= pas7_w)) s4_c = 7;

  if(s5 > pas0_w) s5_c = 0;
  else if((s5 < pas0_w) && (s5 >= pas1_w)) s5_c = 1;
  else if((s5 < pas1_w) && (s5 >= pas2_w)) s5_c = 2;
  else if((s5 < pas2_w) && (s5 >= pas3_w)) s5_c = 3;
  else if((s5 < pas3_w) && (s5 >= pas4_w)) s5_c = 4;
  else if((s5 < pas4_w) && (s5 >= pas5_w)) s5_c = 5;
  else if((s5 < pas5_w) && (s5 >= pas6_w)) s5_c = 6;
  else if((s5 < pas6_w) && (s5 >= pas7_w)) s5_c = 7;

  if(s6 > pas0_w) s6_c = 0;
  else if((s6 < pas0_w) && (s6 >= pas1_w)) s6_c = 1;
  else if((s6 < pas1_w) && (s6 >= pas2_w)) s6_c = 2;
  else if((s6 < pas2_w) && (s6 >= pas3_w)) s6_c = 3;
  else if((s6 < pas3_w) && (s6 >= pas4_w)) s6_c = 4;
  else if((s6 < pas4_w) && (s6 >= pas5_w)) s6_c = 5;
  else if((s6 < pas5_w) && (s6 >= pas6_w)) s6_c = 6;
  else if((s6 < pas6_w) && (s6 >= pas7_w)) s6_c = 7;


  if(s7 > pas0_w) s7_c = 0;
  else if((s7 < pas0_w) && (s7 >= pas1_w)) s7_c = 1;
  else if((s7 < pas1_w) && (s7 >= pas2_w)) s7_c = 2;
  else if((s7 < pas2_w) && (s7 >= pas3_w)) s7_c = 3;
  else if((s7 < pas3_w) && (s7 >= pas4_w)) s7_c = 4;
  else if((s7 < pas4_w) && (s7 >= pas5_w)) s7_c = 5;
  else if((s7 < pas5_w) && (s7 >= pas6_w)) s7_c = 6;
  else if((s7 < pas6_w) && (s7 >= pas7_w)) s7_c = 7;

  if(s8 > pas0_w) s8_c = 0;
  else if((s8 < pas0_w) && (s8 >= pas1_w)) s8_c = 1;
  else if((s8 < pas1_w) && (s8 >= pas2_w)) s8_c = 2;
  else if((s8 < pas2_w) && (s8 >= pas3_w)) s8_c = 3;
  else if((s8 < pas3_w) && (s8 >= pas4_w)) s8_c = 4;
  else if((s8 < pas4_w) && (s8 >= pas5_w)) s8_c = 5;
  else if((s8 < pas5_w) && (s8 >= pas6_w)) s8_c = 6;
  else if((s8 < pas6_w) && (s8 >= pas7_w)) s8_c = 7;

  if(s9 > pas0_w) s9_c = 0;
  else if((s9 < pas0_w) && (s9 >= pas1_w)) s9_c = 1;
  else if((s9 < pas1_w) && (s9 >= pas2_w)) s9_c = 2;
  else if((s9 < pas2_w) && (s9 >= pas3_w)) s9_c = 3;
  else if((s9 < pas3_w) && (s9 >= pas4_w)) s9_c = 4;
  else if((s9 < pas4_w) && (s9 >= pas5_w)) s9_c = 5;
  else if((s9 < pas5_w) && (s9 >= pas6_w)) s9_c = 6;
  else if((s9 < pas6_w) && (s9 >= pas7_w)) s9_c = 7;

  if(s10 == 1) s10_c = 0;
  else s10_c = 7;

  /*  //PID for 8 sensors
   line = (s2_c * 1) + (s3_c * 2) + (s4_c * 3) + (s5_c * 4) + (s6_c * 5) + (s7_c * 6) + (s8_c * 7) + (s9_c * 8);
   line = line * 10;
   line = line / (s2_c + s3_c + s4_c + s5_c + s6_c + s7_c + s8_c + s9_c);
   line = line - 10;
   
   if(line == -11) {
   if(s2_c + s3_c + s4_c < s7_c + s8_c + s9_c) pos = 2;
   else if(s2_c + s3_c + s4_c > s7_c + s8_c + s9_c) pos = 0;
   else
   pos = 1;
   }
   */


  // PID for 10 sensors
  line = (s1_c * 1) + (s2_c * 2) + (s3_c * 3) + (s4_c * 4) + (s5_c * 5) + (s6_c * 6) + (s7_c * 7) + (s8_c * 8) + (s9_c * 9) + (s10_c * 10);
  line = line * 10;
  line = line / (s1_c + s2_c + s3_c + s4_c + s5_c + s6_c + s7_c + s8_c + s9_c + s10_c);
  line = line - 10;




  if(line != -11) {
    if(s2_c + s3_c + s4_c + s5_c < s6_c + s7_c + s8_c + s9_c) pos = 2;
    else if(s2_c + s3_c + s4_c + s5_c > s6_c + s7_c + s8_c + s9_c ) pos = 0;
    else if (s5_c > 6 && s6_c > 6) pos = 1;
    // else if(s1_c == 7) pos = 3;
    // else if(s10_c == 7) pos = 4;
  }
}




void follow(){

        read_sensors_white(); 
 


   proportional = line - 45;

  uint8_t derivative = proportional - last_proportional;

  int integral;

  last_proportional = proportional;

  integral += proportional;
  Serial.println(proportional);

  long power_difference = (proportional * kp) + (derivative * kd) + (integral * ki) ;

  if(line != -11)
  { 
    if(power_difference > max_vel)  power_difference = max_vel;
    if(power_difference < -max_vel) power_difference = -max_vel;

    if(power_difference < 0)
      set_motors(max_vel + power_difference, max_vel);
    else
      set_motors(max_vel, max_vel - power_difference); 
  }

  else if (line == -11){
    if (pos == 2)
      set_motors(turn_vel, -turn_vel + 100);
    else if (pos == 0) 
      set_motors(-turn_vel + 100, turn_vel);
    else if(pos == 1)
      set_motors(200, 200);
  }
}

#endif
