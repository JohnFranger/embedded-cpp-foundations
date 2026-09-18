/**
 * Lesson 40 - Motor Buttons

 Pauls solution to yesterday's homework.

 I thought about making it go straight up to 90 or 100 but I thought
 he didn't want to. Looks like he did. 

 I should try this again using functional programming.

 However, I changed some of his code he had bugs and this way just works more simply

 I didn't test the wiring cause I'm too tired. I know ts is working.
 */

 int speedPin = 5;
 int speedVal = 0;
 int dir1 = 4;
 int dir2 = 3;

 int b1Pin = 8;
 int b1Val;

 int b2Pin = 10;
 int b2Val;

 int dt = 100;

void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(b1Pin, INPUT_PULLUP);
  pinMode(b2Pin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {


  b1Val = digitalRead(b1Pin);
  b2Val = digitalRead(b2Pin);
  
  if(b1Val==0){
    speedVal -= 10;
    delay(dt);
  }
  if(b2Val==0){
    speedVal += 10;
    delay(dt);
  }
  if(speedVal > 255){
    speedVal = 255;
  }
  if(speedVal < -255){
    speedVal = -255;
  }
  if(b1Val == 0 && speedVal == -10){
    speedVal += -90;
  }
  if(b2Val == 0 && speedVal == 10){
    speedVal += 90;
  }
  if(speedVal == 90 || speedVal == 95){
    speedVal = 0; 
  }
  if(speedVal == -90 || speedVal == -95){
    speedVal = 0; 
  }
  if(speedVal == 0){
    analogWrite(speedPin, 0);
  }
  if(speedVal > 0){
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
    analogWrite(speedPin, speedVal);
  }
  if(speedVal < 0){
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
    analogWrite(speedPin, -speedVal);
  }

  Serial.print("Motor Speed: ");
  Serial.println(speedVal);
  delay(dt);

}

