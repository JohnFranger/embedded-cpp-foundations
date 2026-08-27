/**
 * Lesson 15 - For Loops
 
 Learning how to use For Loops in Arduinos
 */

int yelLed = 6;
int redLed = 9;

int wT = 500;

int yBlink = 5;
int rBlink = 3;

int j;

void setup() {
  pinMode(yelLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  for(j = 1 ; j <= yBlink; j++){
    digitalWrite(yelLed,HIGH);
    delay(wT);
    digitalWrite(yelLed,LOW);
    delay(wT);
  }
  for(j = 1; j <= rBlink; j++){
    digitalWrite(redLed,HIGH);
    delay(wT);
    digitalWrite(redLed,LOW);
    delay(wT);
  }
}
