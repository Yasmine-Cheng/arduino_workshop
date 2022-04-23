int Apin = A0;
int Dpin = 8;
int level;
int value;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Apin, INPUT);
  pinMode(Dpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(Apin);//數值資料
  level = digitalRead(Dpin);//類比資料（偵測有沒有）
  Serial.print("value: ");
  Serial.println(value);
  Serial.print("1 = Undetected, 0 = Detected : ");
  Serial.println(level);
  delay(1000);
}
