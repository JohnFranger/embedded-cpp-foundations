/**
06-LED-Binary-Counter

Going over the homework project from lesson 05. 

Considering I was able to complete the homework I will use my original code, just change the pins. 

The homework for this lesson is to add an extra light and make it count to 31. I will not do it as it is redundant. 
*/

int redPin = 2; //2^3 = 8
int yelPin = 3; //2^2 = 4
int grePin = 4; //2^1 = 2
int bluPin = 5; //2^0 = 1


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