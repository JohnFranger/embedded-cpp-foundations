/**
 * Lesson 13 — Arduino If Statements
 *
 * Drives an LED through a smooth brightness ramp using hardware PWM.
 * Demonstrates duty-cycle control on an Arduino Uno PWM-capable pin.
 */

 int readVal;
 int readPin = A3;
 int waitT = 500;
 float v2;

 int redPin = 9;


void setup() {
  pinMode(readPin, INPUT);
  pinMode(redPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(readPin);
  v2 = (5./1023.)*readVal;
  Serial.print("Potentiometer voltage is ");
  Serial.println(v2);
  delay(waitT);

  //Possible conditions are greater than, less than, equal, not equal, greater or equal to, less than or equal to, and "and" or "or" 
  if(v2 > 2.0 && v2 < 3.0){
    digitalWrite(redPin,HIGH);
    Serial.println("Warning!");
  }
  if(v2 < 2.0 || v2 > 3.0){
    digitalWrite(redPin,LOW);
  }
  
}
