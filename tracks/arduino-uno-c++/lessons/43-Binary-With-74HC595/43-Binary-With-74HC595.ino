/**
 * Lesson 43 - Binary With 74HC595

 Homework Check from yesterday
 */

int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=250;
 
byte LED1s=0b00000000;

void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}
 
void loop() {
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LED1s);
  digitalWrite(latchPin,HIGH);
  delay(dt);

  LED1s++;

}