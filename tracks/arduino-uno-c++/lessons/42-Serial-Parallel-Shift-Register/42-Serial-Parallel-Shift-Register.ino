/**
 * Lesson 42 - Serial to Parallel Shift Register

 1     U    16
 2          15
 3          14
 4          13
 5          12
 6          11
 7          10
 8          9

 Pins 1-7, 15 Output Pins
 Pin 8 GND Vss
 Pin 9 Q7 Serial Out
 Pin 10 MR Master Reclear
 Pin 11 SH_CP Shift register clock pin 
 Pin 12 ST_CP Storage Register clock pin (latch pin)
 Pin 13 OE Output enabled, active low
 Pin 14 D5 Serial data input
 Pin 16 Vcc
 */

 
int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

byte LED1s = 0b01010101;
byte LED2s = 0b10101010;


int dt = 200;

void setup() {
  Serial.begin(9600); 
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LED1s);
  digitalWrite(latchPin, HIGH);
  delay(dt);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LED2s);
  digitalWrite(latchPin, HIGH);
  delay(dt);
  
  //if(LEDs == 0){
  //  LEDs = 0x01;
  //}
  
  //LEDs = LEDs + LEDs;

  //delay(dt);
  //Serial.println(LEDs, BIN);
}
