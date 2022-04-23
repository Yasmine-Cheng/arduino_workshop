#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27 , 2 , 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Hello World");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("AI Course");
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
