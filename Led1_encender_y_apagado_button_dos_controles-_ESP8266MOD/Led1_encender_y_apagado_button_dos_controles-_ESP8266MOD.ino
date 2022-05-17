#define LED D7
#define BOTON1 D6 // boton pulsador 1
#define BOTON2 D5 // boton pulsador 2

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BOTON1, INPUT);
  pinMode(BOTON2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BOTON1)==HIGH){
    digitalWrite(LED, HIGH);
    }
  else 
  if (digitalRead(BOTON2) ==HIGH){
    digitalWrite(LED,LOW);
    }  
}
