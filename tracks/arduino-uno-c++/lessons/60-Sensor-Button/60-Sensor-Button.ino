/**
 * Lesson 60 - Sensor Button

 Homework check from previous
  my solution is in the _homework folder, this is paul's
 */
 #include <LiquidCrystal.h>

 int rs = 7;
 int en = 6;
 int d4 = 5;
 int d5 = 4;
 int d6 = 3;
 int d7 = 2;

 LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


int trigPin = 12;
int echoPin = 11;
int pingTravelTime;
float pingTravelDistance;
float distToTarget;

int butPin = A0;
int butVal;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(butPin, INPUT);
  digitalWrite(butPin, HIGH);
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Find the Target");
  lcd.setCursor(0,1);
  lcd.print("Press to Measure");
  butVal = digitalRead(butPin);
  while(butVal == 1){
    butVal = digitalRead(butPin);
  }

  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pingTravelTime = pulseIn(echoPin, HIGH);
  delay(25);
  pingTravelDistance = (pingTravelTime*765.*5280.*12.)/(3600.*1000000.);
  distToTarget = pingTravelDistance/2;
  Serial.print(distToTarget);
  Serial.println(" inches");

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Target Distance");
  lcd.setCursor(0, 1);
  lcd.print(distToTarget);
  lcd.print(" inches");
  delay(5000);


  }