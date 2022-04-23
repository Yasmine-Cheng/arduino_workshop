int trigPin = 9;
int echoPin = 10;
long duration, cm;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pinMode(echoPin,INPUT);
  duration = pulseIn(echoPin,HIGH);
  cm = (duration/2) /29.1;

  Serial.print(cm);
  Serial.println("cm");
}
