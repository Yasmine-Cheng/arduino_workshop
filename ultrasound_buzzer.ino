int trigPin = 7;
int echoPin = 10;
int duration, cm;
int buzzer = 11;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin,HIGH);
  cm = (duration/2) / 29.1;

  Serial.print(cm);
  Serial.println("   cm");

    if (cm <= 5){
    digitalWrite(buzzer,HIGH);
    delay(20);
    digitalWrite(buzzer,LOW);
    delay(20);
    }

   if (cm > 5 && cm <= 15){
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    delay(100);
    }

    if (cm > 15){
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    delay(500);
    }
 delay(10);
}
