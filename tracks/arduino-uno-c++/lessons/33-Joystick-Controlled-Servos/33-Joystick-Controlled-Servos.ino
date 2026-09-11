/**
 * Lesson 33 - Joystick Controlled Servos

 Controlling a pair of servos with the joystick then attaching them to get a full range of motion.

 I'm using an mg90s servo which is pretty iffy so i didnt make the laser pointer project type thing he
 suggested but both servos work(ish)
 */
#include <Servo.h>

//Joystick pins
int Xpin = A5;
int Ypin = A3;
int Spin = 2;

//Joysticks
int Xval;
int Yval;
int Sval;

//Calculated
float xAngle;
float yAngle;

//Delay time
int dt = 200;

//Servo objects
Servo xServo;
Servo yServo;

//Servo pins
int xServoPin = 10;
int yServoPin = 5;

//Buzzer
int buzzPin = 7;

//Potentiometers/Servos go from 0 to 1023
//Servos go from 0 to 165
// (0, 0) -> (1023, 165)
// Angle = (165/1023)*potentiPin


void setup() {
  Serial.begin(9600);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(Spin,INPUT_PULLUP);
  xServo.attach(xServoPin);
  yServo.attach(yServoPin);
  pinMode(xServoPin, OUTPUT);
  pinMode(yServoPin, OUTPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  Xval = analogRead(Xpin);
  xAngle = (165./1023.)*Xval;

  Yval = analogRead(Ypin);
  yAngle = (165./1023.)*Yval;

  Sval = digitalRead(Spin);

  xServo.write(xAngle);
  yServo.write(yAngle);

  if(Sval == 0){
    digitalWrite(buzzPin,HIGH);
  } else{
    digitalWrite(buzzPin,LOW);
  }

}
