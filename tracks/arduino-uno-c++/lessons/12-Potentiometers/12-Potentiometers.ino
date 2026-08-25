/**
 * Lesson 12 — Understanding Potentiometers

A potentiometer is a variable resistor; a resistor where you can change the resistance.

Using circuit analysis we can find the voltage passing through after resistance.

 */

int readPin = A3; 
int readVal;
float V2;
int waitT = 500;

void setup() {
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(readPin);
  V2 = (5./1023.)*readVal;
  Serial.print("The output voltage is ");
  Serial.println(V2);
  delay(waitT);

}
