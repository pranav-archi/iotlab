const int leds[]={2,3,4,5,6};
void setup()
{
  
  for(int i=0;i<6;i=i+2){
  	pinMode(leds[i],OUTPUT);
  }
}

void loop()
{
  for(int i=0;i<6;i=i+2){
  digitalWrite(leds[i], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(leds[i], LOW);
  delay(500);
}
}