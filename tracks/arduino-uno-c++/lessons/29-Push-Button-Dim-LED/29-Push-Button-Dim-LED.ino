/**
 * Lesson 29 - Push Button Dim LED

 Paul gave the task at the beginning of the video and I made my solution, I will attach it in the homework folder.

 The following code wil be Paul's.
 */

int buttonPin1 = 2;
int buttonPin2 = 4;
int buttonVal1;
int buttonVal2;

int dT = 500;

int ledPin = 11;
int ledBright = 255;

int buzzPin = 13;

void setup() {
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);

  Serial.print("Button 1 = ");
  Serial.print(buttonVal1);
  Serial.print(", Button 2 = ");
  Serial.print(buttonVal2);
  Serial.print(", LedBright = ");
  Serial.println(ledBright);

  delay(dT);
  if(buttonVal1==0){
    ledBright += 5;
  }
  if(buttonVal2==0){
    ledBright -= 5;
  }
  if(ledBright > 255){
    ledBright = 255;
    digitalWrite(buzzPin,HIGH);
    delay(dT);
    digitalWrite(buzzPin,LOW);
  }
  if(ledBright < 0){
    ledBright = 0;
    digitalWrite(buzzPin,HIGH);
    delay(dT);
    digitalWrite(buzzPin,LOW);
  }

  analogWrite(ledPin, ledBright);
}
