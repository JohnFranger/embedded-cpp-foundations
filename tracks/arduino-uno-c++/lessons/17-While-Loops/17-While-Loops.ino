/**
 * Lesson 17 - While Loops

  Learning to use while loops in arduino programs. 

 */


int wT = 500;

int ledPin = 5;
int potPin = A5;s
int potVal;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(potPin,INPUT);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(wT);
  while(potVal >= 1000){
    digitalWrite(ledPin,HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
    delay(wT);
  }
  digitalWrite(ledPin,LOW);
}
