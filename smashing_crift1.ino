void setup()
{
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorvalue=0;
  sensorvalue= analogRead(A0);
  Serial.println(sensorvalue);
  if(sensorvalue <535)
  {
    digitalWrite(2,HIGH);
   }
   if(sensorvalue >535)
  {
    digitalWrite(2,HIGH);
     digitalWrite(3,HIGH);
     digitalWrite(4,HIGH);
     digitalWrite(5,HIGH);
   }

}