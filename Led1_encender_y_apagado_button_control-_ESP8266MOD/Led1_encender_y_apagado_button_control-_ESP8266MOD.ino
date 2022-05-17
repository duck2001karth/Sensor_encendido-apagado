#define BOTON D6
#define LED D7

int auxled = 1; //Mantiene encendido el led al ejecutar
int newboton = 0;
int auxboton = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(BOTON, INPUT);
pinMode(LED, OUTPUT);
digitalWrite(LED, auxled);
}

void loop() {
  // put your main code here, to run repeatedly:
  newboton = digitalRead(BOTON);
  if (newboton != auxboton){ //Si el nuevo boton es diferente 
      auxboton = newboton;
      if(newboton == LOW){ // El nuevo boton debe ser igual a apagado
        auxled = !auxled;
        digitalWrite(LED, auxled);
        }
    }

}
