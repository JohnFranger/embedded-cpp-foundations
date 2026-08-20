/*

Homework 05 — Binary Counter using LEDS

Using 4 leds, use binary to count up to 15 in sequence.

*/


int redPin = 13; //2^3
int yelPin = 10; //2^2
int grePin = 7; //2^1
int bluPin = 4; //2^0


int delayTime = 1000;

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(yelPin,OUTPUT);
  pinMode(grePin,OUTPUT);
  pinMode(bluPin,OUTPUT);
}

void loop() {
  //0
  digitalWrite(redPin, LOW);
  digitalWrite(yelPin, LOW);
  digitalWrite(grePin, LOW);
  digitalWrite(bluPin, LOW);

  delay(delayTime);

  //1
  digitalWrite(redPin, LOW);
  digitalWrite(yelPin, LOW);
  digitalWrite(grePin, LOW);
  digitalWrite(bluPin, HIGH);

  delay(delayTime);

  //2
  digitalWrite(redPin, LOW);
  digitalWrite(yelPin, LOW);
  digitalWrite(grePin, HIGH);
  digitalWrite(bluPin, LOW);

  delay(delayTime);

  //3
  digitalWrite(redPin, LOW);
  digitalWrite(yelPin, LOW);
  digitalWrite(grePin, HIGH);
  digitalWrite(bluPin, HIGH);

  delay(delayTime);

  //4
  digitalWrite(redPin, LOW);
  digitalWrite(yelPin, HIGH);
  digitalWrite(grePin, LOW);
  digitalWrite(bluPin, LOW);

  delay(delayTime);

  //5
  digitalWrite(redPin, LOW);
  digitalWrite(yelPin, HIGH);
  digitalWrite(grePin, LOW);
  digitalWrite(bluPin, HIGH);

  delay(delayTime);

  //6
  digitalWrite(redPin, LOW);
  digitalWrite(yelPin, HIGH);
  digitalWrite(grePin, HIGH);
  digitalWrite(bluPin, LOW);

  delay(delayTime);

  //7
  digitalWrite(redPin, LOW);
  digitalWrite(yelPin, HIGH);
  digitalWrite(grePin, HIGH);
  digitalWrite(bluPin, HIGH);

  delay(delayTime);

  //8
  digitalWrite(redPin, HIGH);
  digitalWrite(yelPin, LOW);
  digitalWrite(grePin, LOW);
  digitalWrite(bluPin, LOW);

  delay(delayTime);

  //9
  digitalWrite(redPin, HIGH);
  digitalWrite(yelPin, LOW);
  digitalWrite(grePin, LOW);
  digitalWrite(bluPin, HIGH);

  delay(delayTime);

  //10
  digitalWrite(redPin, HIGH);
  digitalWrite(yelPin, LOW);
  digitalWrite(grePin, HIGH);
  digitalWrite(bluPin, LOW);

  delay(delayTime);

  //11
  digitalWrite(redPin, HIGH);
  digitalWrite(yelPin, LOW);
  digitalWrite(grePin, HIGH);
  digitalWrite(bluPin, HIGH);

  delay(delayTime);

  //12
  digitalWrite(redPin, HIGH);
  digitalWrite(yelPin, HIGH);
  digitalWrite(grePin, LOW);
  digitalWrite(bluPin, LOW);

  delay(delayTime);

  //13
  digitalWrite(redPin, HIGH);
  digitalWrite(yelPin, HIGH);
  digitalWrite(grePin, LOW);
  digitalWrite(bluPin, HIGH);

  delay(delayTime);

  //14
  digitalWrite(redPin, HIGH);
  digitalWrite(yelPin, HIGH);
  digitalWrite(grePin, HIGH);
  digitalWrite(bluPin, LOW);

  delay(delayTime);

  //15
  digitalWrite(redPin, HIGH);
  digitalWrite(yelPin, HIGH);
  digitalWrite(grePin, HIGH);
  digitalWrite(bluPin, HIGH);

  delay(delayTime);
}
