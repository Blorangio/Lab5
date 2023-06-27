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
int volts;
int mins = 10000;
int maxs = 0;
void loop() {
  volts = analogRead(A5);
  Serial.println(volts);
  mins = min(mins, volts);
  maxs = max(maxs, volts);
  int outPut = map(volts, mins, maxs, 0, 255);
  analogWrite(D5, outPut);
}