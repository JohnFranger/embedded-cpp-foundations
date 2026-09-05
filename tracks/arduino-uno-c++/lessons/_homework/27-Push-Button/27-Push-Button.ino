/**
 * Lesson 27 - Push Buttons
 
  Learning to use push buttons and how they work physically and pull up and pull down resistors. 

 */

  int ledPin = 8;
  int butPin = 4;
  int butRead;

  int dT = 500;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(butPin, INPUT);
}

void loop() {
  butRead = digitalRead(butPin);
  Serial.println(butRead);
  if(butRead == 0){
    digitalWrite(ledPin, HIGH);
  } else
  digitalWrite(ledPin,LOW);
}

