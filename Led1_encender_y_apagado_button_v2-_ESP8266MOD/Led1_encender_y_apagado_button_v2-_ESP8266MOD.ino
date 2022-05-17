#define BOTON D6
#define LED D7
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(BOTON, INPUT);
pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(digitalRead(BOTON));
  digitalWrite(LED, !digitalRead(BOTON));
  delay(1000);
}
