/**
 * Lesson 23 - Changing tone of an active buzzer


 */

int buzzPin = 11;

int dt1 = 1;
int dt2 = 2;

void setup() {
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  for(int i = 0; i <= 100; i++){
    digitalWrite(buzzPin,HIGH);
    delay(dt1);
    digitalWrite(buzzPin,LOW);
    delay(dt1);
  }
  for(int i = 0; i <= 100; i++){
    digitalWrite(buzzPin,HIGH);
    delay(dt2);
    digitalWrite(buzzPin,LOW);
    delay(dt2);
  }
}
