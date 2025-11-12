/*
Led RGB
Controla cada color del led RGB con un pulsador.
*/

//Variables estáticas
int ledRojo = 9;   //Declaro pin para cátodo del rojo
int ledVerde = 10; //Declaro pin para cátodo del verde
int ledAzul = 11;  //Declaro pin para cátodo del azul
int pulsador1 = 5; //Declaro pin para el pulsador1
int pulsador2 = 6; //Declaro pin para el pulsador2
int pulsador3 = 7; //Declaro pin para el pulsador3
//Variables dinámicas
int estado1; //Inicializo la variable de estado1
int estado2; //Inicializo la variable de estado2
int estado3; //Inicializo la variable de estado3

void setup() {
  pinMode(ledRojo, OUTPUT);    //Configuro el pin 9 como salida
  pinMode(ledVerde, OUTPUT);   //Configuro el pin 10 como salida
  pinMode(ledAzul, OUTPUT);    //Configuro el pin 11 como salida
  pinMode(pulsador1, INPUT);   //Configuro el pin 5 como entrada
  pinMode(pulsador2, INPUT);   //Configuro el pin 6 como entrada
  pinMode(pulsador3, INPUT);   //Configuro el pin 7 como entrada
}

void loop() {
  estado1 = digitalRead(pulsador1); //Lee el estado del pin 5 y lo almacena
  estado2 = digitalRead(pulsador2); //Lee el estado del pin 6 y lo almacena
  estado3 = digitalRead(pulsador3); //Lee el estado del pin 7 y lo almacena

  if (estado1 == HIGH) {            //Si el pulsador1 está pulsado
    digitalWrite(ledRojo, HIGH);    //Enciende led rojo
  } else {                          //Si no está pulsado
    digitalWrite(ledRojo, LOW);     //Apaga led rojo
  }

  if (estado2 == HIGH) {            //Si el pulsador2 está pulsado
    digitalWrite(ledVerde, HIGH);   //Enciende led verde
  } else {                          //Si no está pulsado
    digitalWrite(ledVerde, LOW);    //Apaga led verde
  }

  if (estado3 == HIGH) {            //Si el pulsador3 está pulsado
    digitalWrite(ledAzul, HIGH);    //Enciende led azul
  } else {                          //Si no está pulsado
    digitalWrite(ledAzul, LOW);     //Apaga led azul
  }
}
