#ifndef hardware_init
#define hardware_init

#include "Servo.h"
#include "Arduino.h"


Servo esc;
int minPulseRate = 1000;
int maxPulseRate = 2000;


#define escPin 11
#define pwma  5
#define ain1  13
#define pwmb  6
#define bin1  2
#define telecom 7  



int s1;
int s2;
int s3;
int s4;
int s5;
int s6;
int s7;
int s8;
int s9;
int s10;
int s11;
int s12;
int sd;

uint8_t start = 0;



 void hardwareInit() {
  
  pinMode(pwma,OUTPUT);
  pinMode(ain1,OUTPUT);
  pinMode(pwmb,OUTPUT);
  pinMode(bin1,OUTPUT);
  pinMode(telecom, INPUT); 

  Serial.begin(9600);
  Serial.setTimeout(500);
  
  esc.attach(escPin, minPulseRate, maxPulseRate); 
  esc.write(0);
 
 }
 
 #endif
