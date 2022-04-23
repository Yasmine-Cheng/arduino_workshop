#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27 , 2 , 1, 0, 4, 5, 6, 7, 3, POSITIVE); //0x3F

int Apin = A0;
int Dpin = 8;
int R = 11;
int G = 10;
int B = 9;
int value = 0;
int level;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(Apin, INPUT);
  pinMode(Dpin, INPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(Apin);//數值資料
  level = digitalRead(Dpin);//類比資料（偵測有沒有）
  Serial.print("value: ");
  Serial.println(value);
  Serial.print(" ; ");
  Serial.print("level: ");
  Serial.println(level);

  if(value>300){
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    lcd.setCursor(0, 1);
    lcd.print(value);
  }

  if(value<=300){
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Undetected");
    lcd.setCursor(0, 1);
    lcd.print("value= ");
    lcd.print(value);
  }
  
  delay(3000);
}  
