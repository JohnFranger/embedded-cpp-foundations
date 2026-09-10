/**
 * Lesson 32 - Joystick

  Two potentiometers that read across x and y.
  There is also a switch

 */

int xPin = A5;
int yPin = A3;
int switchPin = 2;

int xVal;
int yVal;
int switchVal;

int dT = 200;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin,HIGH);
  //pinMode(switchPin, INPUT_PULLUP) is better
}

void loop() {
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  switchVal = digitalRead(switchPin);

  Serial.print("X value: ");
  Serial.print(xVal);
  Serial.print(", Y Value: ");
  Serial.print(yVal);
  Serial.print(", Switch State: ");
  Serial.println(switchVal);
}
