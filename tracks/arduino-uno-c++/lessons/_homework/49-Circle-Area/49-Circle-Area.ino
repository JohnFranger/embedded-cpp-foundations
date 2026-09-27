/**
 * Lesson 49 - Simple Calc LCD

 Homework check from yesterday
 */

#include <LiquidCrystal.h>

int rs=7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

float radius;
float pi = 3.14;
float area;

String op;

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Input radius");
  while(Serial.available() == 0){

  }
  radius = Serial.parseFloat();
  lcd.clear();
  lcd.setCursor(0,0);
  area = pi * radius * radius;
  lcd.print("The area is");
  lcd.setCursor(0,1);
  lcd.print(area);
  lcd.print("units^2");
  delay(5000);
}
