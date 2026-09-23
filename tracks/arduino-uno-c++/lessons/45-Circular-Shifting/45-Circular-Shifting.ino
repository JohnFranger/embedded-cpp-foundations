/**
 * Lesson 45 - Circular Shift

 Homework Check from yesterday

 In an 8 bit system circular shift left.

 Everything shifts left but MSB foes to LSB.

 myByte = myByte / 128 moves the MSB, how do I get the rest.

 myByte/128 + myByte*2
 The division preserves the MSB by isolating it. the myByte*2 gets the rest of it shifted left

 CSR

 myByte * 128 gets LSB moved to front.
 myByte / 2 gets the rest shifted.
 Add together
 */

int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=500;
 
byte myByte=0b11111101;

void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}
 
void loop() {
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,myByte);
  digitalWrite(latchPin,HIGH);
  delay(dt);

  //Shift Left
  //myByte = myByte/128 + myByte*2;

  //Shift Right
  myByte = myByte*128 + myByte/2;

}