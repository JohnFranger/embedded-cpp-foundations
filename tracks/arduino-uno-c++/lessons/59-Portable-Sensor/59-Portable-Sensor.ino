/**
 * Lesson 59 - Portable Sensor

 Homework Check from lesson 59
 Paul's own style

 I'm leaving mine wired the way I have it because I don't have a nano and mine works fine with my new 
 breadboard
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

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  lcd.clear();
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
  
  lcd.setCursor(0, 0);
  lcd.print("Target Distance");
  lcd.setCursor(0, 1);
  lcd.print(distToTarget);
  lcd.print(" inches");
  delay(500);
  }