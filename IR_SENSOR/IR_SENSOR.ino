void setup() 
{
pinMode(4,INPUT);
pinMode(12,OUTPUT);//LED
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(digitalRead(4)==LOW)
  {
    digitalWrite(12,HIGH);
  }
  else
  {
  digitalWrite(12,LOW);
  }
}
