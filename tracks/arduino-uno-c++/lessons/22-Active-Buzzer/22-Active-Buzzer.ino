/**
 * Lesson 22 -- Active Buzzer

 Learning to use the Active Buzzer to warn a user

 Paul gave a homework assignment halfway through and asked to pause to complete before he went over it. 

 */

int buzzPin = 11;

int potPin = A3;
int potVal;

int dT = 2000;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println(potVal);

  while(potVal > 1000){
    digitalWrite(buzzPin,HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
  }
  digitalWrite(buzzPin,LOW);
}
