/**
 * Lesson 61 - Improving Precision
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

int numMeas = 100;
float avMeas;
int j;
float bucket = 0;

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

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Measuring...");

  for ( j = 1; j <= numMeas; j = j + 1){
    digitalWrite(trigPin,LOW);
    delayMicroseconds(10);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    pingTravelTime = pulseIn(echoPin, HIGH);
    //delay(25);
    pingTravelDistance = (pingTravelTime*765.*5280.*12.)/(3600.*1000000.);
    distToTarget = pingTravelDistance/2;
    bucket = bucket + distToTarget;
  }
  avMeas = bucket/numMeas;
  
  Serial.print(avMeas);
  Serial.println(" inches");

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Av. Dist. to Target");
  lcd.setCursor(0, 1);
  lcd.print(avMeas);
  lcd.print(" inches");
  delay(5000);

  bucket = 0;

  }
