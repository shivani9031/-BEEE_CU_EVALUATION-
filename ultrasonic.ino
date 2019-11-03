const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;

void setup(){

pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);

}

void loop(){

digital.Write(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWite(trigPin,LOW);

distance = duration * 0.017;

Serial.print("Distance : ");
Serial.println(distance);

}
