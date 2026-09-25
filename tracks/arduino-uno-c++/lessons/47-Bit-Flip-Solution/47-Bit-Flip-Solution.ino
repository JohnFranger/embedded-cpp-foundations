/**
 * Lesson 47 - Binary and Hexadecimal Bit Flipper
 
  Homework check from lesson 46

 */

 
int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=1000;
 
byte myByte = 0x18;
byte byteFlipped;



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

  byteFlipped = 255 - myByte;

  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,byteFlipped);
  digitalWrite(latchPin,HIGH);
  delay(dt);


}
