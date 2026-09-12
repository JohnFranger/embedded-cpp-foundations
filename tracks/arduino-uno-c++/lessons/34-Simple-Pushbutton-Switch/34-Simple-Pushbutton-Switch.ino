/**
 * Lesson 34 - Simple Pushbutton Switch

Teaching a more simple way to use the pushbutton

Paul uses old syntax which I've commented out, I am using new awesome super dope syntax

 */

int butPin = 2;
int butVal;

int dT = 200;

void setup() {
  Serial.begin(9600);
  pinMode(butPin,INPUT_PULLUP);
  //pinMode(butPin,INPUT);
  //digitalWrite(butPin,HIGH);
}

void loop() {
  butVal = digitalRead(butPin);

  Serial.print("Your button is: ");
  Serial.println(butVal);

  delay(dT);
}
