#line 1 "firmware.ino"
/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
#include "Arduino.h"
void setup();
void loop();
#line 10
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  Serial.begin(115200);  
  Serial.println("We are now starting the blinking app");
  
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.println("blink loop");
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}

