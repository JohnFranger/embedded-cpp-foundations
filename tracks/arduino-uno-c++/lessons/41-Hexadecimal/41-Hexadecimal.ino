/**
 * Lesson 41 - Understanding Hexadecimal Numbers

 Review: Binary

 - Any number can be represented in binary, where each place value is 2^n
 
 Hexadecimal chunks binary into groups of 4. We need to represent numbers between 0 and 15.
 Hex - (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F)
 Dec - (0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15)

  Simplifies numbers to make it easier to understand

  one byte is 8 bits. Byte is a data type in arduino taking up less space than an int (stores between 0 and 255)

  If we say 0x32 the 0x is demonstrating that it is a number in hexademical.

 */

 byte myByte = 0x00;

 int dt = 1000;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(myByte, DEC);
  Serial.print("     ");
  Serial.print(myByte, HEX);
  Serial.print("     ");
  Serial.println(myByte, BIN);
  //Serial.print("     ");
  delay(dt);
  myByte++;
}
