/**
 * Homework 48 - LCD Calc
 */

 #include <LiquidCrystal.h>

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int dt = 4000;

float number1;
float number2;
String operation;

void setup() {
  //16 columns, 2 rows
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Enter number one:");
  while(Serial.available() == 0){

  }
  number1 = Serial.parseFloat();
  lcd.setCursor(0, 0);
  lcd.print("Enter number two:");
  while(Serial.available() == 0){

  }
  number2 = Serial.parseFloat();
  lcd.clear();
  lcd.print("+, -, *, /");
  while(Serial.available() == 0){

  }
  operation = Serial.readString();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("The answer is:");
  lcd.setCursor(0,1);
  lcd.print(number1);
  lcd.print(operation);
  lcd.print(number2);
  lcd.print("=");
  if(operation == "+"){
    lcd.print(number1 + number2);
  } else if(operation == "-"){
    lcd.print(number1 - number2);
  } else if(operation == "*"){
    lcd.print(number1 * number2);
  } else if(operation == "/"){
    lcd.print(number1 / number2);
  }

  delay(dt);

}
