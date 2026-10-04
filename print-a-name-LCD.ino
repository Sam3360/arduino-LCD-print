#include <LiquidCrystal.h>

const int rs=8, en=9, d4=10, d5=11, d6=12, d7=13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2); 
  lcd.print("hello!"); // print text 
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,1); // (0-15, 0-1) THIS CAN BE SET ACCORDING TO WHATEVER 
  lcd.noCursor(); // cursor off
  delay(500); // WAIT 
  lcd.cursor(); // cursor on
  delay(500); // WAIT
}
