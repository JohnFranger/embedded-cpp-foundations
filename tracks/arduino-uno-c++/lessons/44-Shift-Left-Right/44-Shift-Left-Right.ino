/**
 * Lesson 44 - 74HC595 LEDs slide left or right

 Homework Check from yesterday
 */

int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=500;
 
byte myByte=0b01010101;

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

  //Shifting to the right
  //Losing a bit worth
  myByte = myByte/2;

  //Shifting to the left
  //myByte = myByte*2

}