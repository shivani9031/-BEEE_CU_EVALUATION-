const int switchPin=2
void setup() 
{
  Serial.begin(9600);
  pinMode(switchPin,INPUT);
  for(int i=10;i<=13;i++)
  {
    pinMode(i,OUTPUT);
    
  }
  

}

void loop() 
{
  int c=analogRead(A0);
  if(digitalRead(switch)==HIGH)
  {
    if(c<500)
    {
      allLEDsON();
    }
    else if(c>500)
    {
      digitalWrite(13,HIGH);
    }
  }

  else
  {allLEDsOFF();
  }

  void allLEDsON(void)
  {
    for(int i=10; i<=13;i++)
    {
      digitalWrite(i,HIGH);
    }
    delay(100);
  }
  void allLEDsOFF(void)
  {
    for(int i=10;i<=13;i++)
    {
      digitalWrite(i,LOW);
    }
    delay(100);
  }
    }
    }
  }
