/**
 * Lesson 04 — Understanding Variables
 *
 * Understanding how to use variables to change various things at once. No need to rewrite tons of code.
 *
 * My personal solution the the morse code problem is commented, Paul's will be left visibile.
 */

//bool go = true;

int ledPin = 4;
int dit = 50;
int dah = 150;
int longW = 1000;


void setup() {
  pinMode(ledPin, OUTPUT);
  
}

void loop() {

  //First S
  digitalWrite(ledPin,HIGH);
  delay(dit);
  digitalWrite(ledPin,LOW);
  delay(dit);
  digitalWrite(ledPin,HIGH);
  delay(dit);
  digitalWrite(ledPin,LOW);
  delay(dit);
  digitalWrite(ledPin,HIGH);
  delay(dit);
  digitalWrite(ledPin,LOW);
  delay(dit);

  //The O
  digitalWrite(ledPin,HIGH);
  delay(dah);
  digitalWrite(ledPin,LOW);
  delay(dah);
  digitalWrite(ledPin,HIGH);
  delay(dah);
  digitalWrite(ledPin,LOW);
  delay(dah);
  digitalWrite(ledPin,HIGH);
  delay(dah);
  digitalWrite(ledPin,LOW);
  delay(dah);

  //Second S
  digitalWrite(ledPin,HIGH);
  delay(dit);
  digitalWrite(ledPin,LOW);
  delay(dit);
  digitalWrite(ledPin,HIGH);
  delay(dit);
  digitalWrite(ledPin,LOW);
  delay(dit);
  digitalWrite(ledPin,HIGH);
  delay(dit);
  digitalWrite(ledPin,LOW);
  delay(dit);

  delay(longW);
  /*
  while(go){
    S(ledPin);
    O(ledPin);
    S(ledPin);
    go = false;
  }
  */
}

/*
void S(int pin){
  for(int i = 0 ; i < 3; i++){
  digitalWrite(pin,HIGH);
  delay(200);
  digitalWrite(pin,LOW);
  delay(200);
  }
}

void O(int pin){
  for(int i = 0; i < 3; i++){
  digitalWrite(pin,HIGH);
  delay(400);
  digitalWrite(pin,LOW);
  delay(200);
  }
}
*/