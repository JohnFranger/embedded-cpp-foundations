/**
 * Lesson 25 - Photoresistor
 
 Learning to use a photoresistor and read from it.

 Included homework assignment.  
 */

int lightPin = A3;
int lightVal;

int dV = 250;

int redPin = 11;
int grePin = 10;



void setup() {
  pinMode(lightPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(grePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dV);

  if(lightVal >= 700){
    analogWrite(grePin, 100);
    analogWrite(redPin,0);
  } else {
    analogWrite(redPin, 100);
    analogWrite(grePin,0);
  }
}
