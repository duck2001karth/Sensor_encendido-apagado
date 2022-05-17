#define LED D7
#define LED_2 D8
void setup()
{
  pinMode(LED , OUTPUT);
  pinMode(LED_2 , OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
//----- LED 2 -----

  digitalWrite(LED_2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)  
}
