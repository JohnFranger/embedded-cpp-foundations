/**
 * Homework 39 - DC Buttons
 */

int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int speedVal = 0;
int increment = 10;

int but1 = 8;
int b1Val;
int b1Prev = 1;
int but2 = 10;
int b2Val;
int b2Prev = 1;

int dir = 1;


void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(but1, INPUT_PULLUP);
  pinMode(but2, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  b1Val = digitalRead(but1);
  b2Val = digitalRead(but2);



  if(dir == 1){
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
    if(b1Val == 1 && b1Prev == 0 ){
      speedVal += increment;
      if (speedVal >= 255){
        speedVal = 255;
      }
    }
    if(b2Val == 1 && b2Prev == 0){
      speedVal -= increment;
      if (speedVal <= 0){
        speedVal = 0;
        dir = 0;
      }
    }
  }
  else if(dir == 0){
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
    if(b1Val == 1 && b1Prev == 0 ){
      speedVal -= increment;
      if (speedVal <= 0){
        speedVal = 0;
        dir = 1;
      }
    }
    if(b2Val == 1 && b2Prev == 0){
      speedVal += increment;
      if (speedVal >= 255){
        speedVal = 255;
      }
    }
  }

  analogWrite(speedPin, speedVal);

  /*
  Serial.print("Dir: ");
  Serial.print(dir);
  Serial.print(", Speed: ");
  Serial.println(speedVal);
  */
  
  b1Prev = b1Val;
  b2Prev = b2Val;
}

