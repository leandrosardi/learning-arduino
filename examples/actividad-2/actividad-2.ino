#include <Servo.h> // librería necesaria para el funcionamiento del servo
Servo myservo; //Habilita el servo
int boton = 2; // variable donde se conecta el botón
int eleccion; //variable donde se almacena el número random

int step = 0;
int angulo = 0;

void setup() {
  myservo.attach(9); // Conecta el servo al pin 9
  myservo.write(angulo); //lleva el servomotor
}

void loop() {
  boton = digitalRead (2); //lee el boton
  if (boton) {
    //Sil botón está presionado
    if ( step == 0 ) { angulo = 30; }
    else if ( step == 1 ) { angulo = 60; }
    else if ( step == 2 ) { angulo = 90; }
    else if ( step == 3 ) { angulo = 60; }
    else if ( step == 4 ) { angulo = 30; }
    else if ( step == 5 ) { angulo = 0; }

    step += 1;
    if ( step > 5 ) { step = 0; }

    myservo.write(angulo); //lleva el servomotor
    delay(1000);
  }
}
