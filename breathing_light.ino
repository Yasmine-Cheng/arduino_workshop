int red=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<255; i++){
    analogWrite(red, i);
    delay(20);
  }
  for(int i=255; i>=0; i--){
    analogWrite(red, i);
    delay(20);
  }
}
