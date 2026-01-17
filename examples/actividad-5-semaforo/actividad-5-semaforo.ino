int input = 2; // pin donde entra la señal del pulsador
int output = 9; // pin donde ssale la señal hacia el led
bool status = false; // estado del led (true: encendido, false: apagado)
bool boton;

void setup() {
  // inicializo pins de entrada y salida
  pinMode(input, INPUT);
  pinMode(output, OUTPUT);
  // inicializo serial para enviar infomacion de debug
  Serial.begin(9600);  // velocidad estándar
}

void loop() {
  // lee el boton
  boton = digitalRead(input); 
  // si el boton esta siendo pulsado
  // activa o desactiva el estado del led  
  if (boton == false) {
//status = boton; 
    // decidir si activar o desactivar
    if (status == true) {
      status = false;
      digitalWrite(output, LOW);  // apagar
    } else {
      status = true;
      digitalWrite(output, HIGH); // encender
    }
    // muestro informacion de debug
    //Serial.print("Estado del LED: ");
    //Serial.println(status);
    // darle tiempo al usuario a que suelte el boton
    delay(500);
  }
}