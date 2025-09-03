int sensor=0;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  sensor=analogRead(A0);
  Serial.print("Detected value is:");
  Serial.println(sensor);
  if(sensor>=600)
  {
  digitalWrite(5, HIGH);
  }else
     digitalWrite(5,LOW);
  
   if(sensor>=700)
  {
  digitalWrite(7, HIGH);
  }else
     digitalWrite(7,LOW);
 delay(1000); // Wait for 1000 millisecond(s) 
}