/**
 * Homework 44 - Circular Shift

  Slide to the left or right 
 */

int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=1000;
int MSB;
int LSB;
 
byte myByte=0b11011001;

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

  //Circular Shift Right

/*
  MSB = myByte / 128;
  myByte = myByte*2;
  myByte+=MSB; //Adding to LSB
*/

  //Circular Shift Left

  LSB = myByte % 2;
  myByte = myByte/2;
  myByte += LSB * 128; //2^7 because MSB is worth 2^7 abnd it needs to go there

  

}