int red = 9;
int blue = 10;
int green = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);

  delay(1000);

  digitalWrite(red, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(green, LOW);

  delay(1000);

  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, HIGH);

  delay(1000);

}
