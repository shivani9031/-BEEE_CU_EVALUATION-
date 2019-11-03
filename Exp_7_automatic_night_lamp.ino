void setup()
{
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int d=analogRead(A0);
  Serial.println(d);
  delay(1000);
  if(d>290)
  {
    digitalWrite(7,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(7,LOW);
    delay(1000);
  }
} 
