#define BOTON D6
#define BOTON2 D5
#define LED D7


int newboton1=LOW;
int newboton2=LOW;
int auxled = 1;//Mantiene encendido el led al ejecutar

void setup() {
  // put your setup code here, to run once:

pinMode(BOTON, INPUT);
pinMode(BOTON2, INPUT);
pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  newboton1 = digitalRead(BOTON);
  newboton2 = digitalRead(BOTON2);

      if(newboton1 == LOW && newboton2 == LOW){ // El nuevo boton debe ser igual a apagado
        auxled = !auxled;
        digitalWrite(LED, auxled);
      
    }

}
