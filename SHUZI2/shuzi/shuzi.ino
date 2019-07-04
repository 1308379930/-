void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

byte income=0;

void loop()
{
  if(Serial.available()>0)
  {
    income = Serial.read();
    income = income - '0';
    
    digitalWrite(2,LOW);
    delay(10);
    if(income & 0x1)
    {
      digitalWrite(3,HIGH);
    }
    else
    {
      digitalWrite(3,LOW);
    }
    if((income>>1) & 0x1)
    {
      digitalWrite(4,HIGH);
    }
    else
    {
      digitalWrite(4,LOW);
    }
    if((income>>2) & 0x1)
    {
      digitalWrite(5,HIGH);
    }
    else
    {
      digitalWrite(5,LOW);
    }
    if((income>>3) & 0x1)
    {
      digitalWrite(6,HIGH);
    }
    else
    {
      digitalWrite(6,LOW);
    }
    delay(10);
    digitalWrite(2,HIGH);
    delay(10);
  }
}
    
