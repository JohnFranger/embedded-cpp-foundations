/**
 * Lesson 14-Dimmable-LED-Project
 *
 * Drives an LED through a smooth brightness ramp using hardware PWM.
 * Modify values by using a potentiometer and the values it reads. 
 */

int grePin = 6;
int potPin = A3;

int potVal;
float ledVal;


void setup() {
  pinMode(potPin,INPUT);
  pinMode(grePin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Read value from the potentiometer
  potVal = analogRead(potPin);
  //Calculate equivalent value for LED
  ledVal = (255./1023.)*potVal;
  //Make LED correct birghtness
  analogWrite(grePin,ledVal);
  Serial.println(ledVal);
}
