/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/Documents/CTD_2023/Labs/Lab5/src/Lab5.ino"
void setup();
void loop();
#line 1 "/Users/admin/Documents/CTD_2023/Labs/Lab5/src/Lab5.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
void setup() {
  pinMode(A5, INPUT);
  pinMode(D5, OUTPUT);
  Serial.begin(9600);
}
float volts;
void loop() {
  volts = analogRead(A5);
  Serial.println(volts);
}