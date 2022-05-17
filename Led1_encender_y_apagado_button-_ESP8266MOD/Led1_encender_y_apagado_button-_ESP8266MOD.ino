// C++ code
//
#define BOTON D6
#define LED D7
//const int LED= D8;
//const int LED2= D8;
//const int BOTON= D7 ;
int aux;
void setup()
{
  pinMode(LED , OUTPUT);
  //pinMode(LED2 , OUTPUT);
  pinMode(BOTON , INPUT);
}

void loop()
{
  aux = digitalRead(BOTON);
  if (aux == LOW){
    digitalWrite(LED, HIGH);
    //digitalWrite(LED2, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
    //digitalWrite(LED2, LOW);
  }
 
}
