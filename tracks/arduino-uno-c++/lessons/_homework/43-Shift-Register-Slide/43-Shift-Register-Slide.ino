/**
 * Homework 43 - Shift Register Slide

  Slide to the left or right 
 */

int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=1000;
 
byte LEDs=0b10000000;

void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}
 
void loop() {
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
  digitalWrite(latchPin,HIGH);
  delay(dt);

  //By dividing by two we lose a place value (ie, the LSB)
  //Since this we want to lose values this can be integer division
  LEDs = LEDs/2;

  //If we wanted to shift right we could instead multiply by 2, effectively gaining a place value
  //LEDs = LEDs*2;

}