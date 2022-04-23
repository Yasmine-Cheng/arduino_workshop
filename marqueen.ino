#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27 , 2 , 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(16,0);
  lcd.print("Yasmine");
  lcd.setCursor(16,1);
  //replace messages any u want...
  lcd.print("lalalala...");
  lcd.scrollDisplayLeft();
  delay(500);
}
