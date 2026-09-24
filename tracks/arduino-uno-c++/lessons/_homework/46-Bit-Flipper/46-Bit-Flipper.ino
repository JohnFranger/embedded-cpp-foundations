/**
 * Homework 46 - Flip all the bits

Develop a program that takes a predetermined byte "myByte" and flips each bit.
On <-> off

myByte - a byte 

Examples:
  11011001 -> 00100110
  00001111 -> 11110000
 */

int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=750;
 
byte myByte=0xF0;
byte flipByte= 0xFF;

void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}
 
void loop() {
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin, LSBFIRST, myByte);
  digitalWrite(latchPin,HIGH);
  delay(dt);

  myByte = flipByte - myByte;


}