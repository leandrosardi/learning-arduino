#include <Servo.h>

// Definición de pines
#define PIN_POTENCIOMETRO A0
#define PIN_SERVOMOTOR 9

Servo miServo; // Crea un objeto servo para controlarlo

void setup() {
  miServo.attach(PIN_SERVOMOTOR); // Asocia el objeto Servo al pin
  Serial.begin(9600);             // Inicializa la comunicación serial para monitoreo
}

void loop() {  
  // 1. Lectura del Potenciómetro (Input Analógico)
  // El valor leído va de 0 (0V) a 1023 (5V)
  int valorAnalogico = analogRead(PIN_POTENCIOMETRO); 
  
  // 2. Mapeo del Valor (Conversión a Posición Angular)
  // Convertir el rango (0 a 1023) al rango angular del servo (0 a 180 grados)
  // Esto simula la **Instrumentación** y el **Control**
  int angulo = map(valorAnalogico, 0, 1023, 0, 180);

  // 3. Actuación (Control del Servomotor)
  miServo.write(angulo); // Mueve el servomotor al ángulo calculado
  
  // 4. Monitoreo y Ensayo (Instrumentación)
  // Muestra los valores para verificar el funcionamiento y calibración
  Serial.print("Lectura (0-1023): ");
  Serial.print(valorAnalogico);
  Serial.print(" -> Angulo (0-180°): ");
  Serial.println(angulo);
  
  delay(15); // Pequeña pausa para estabilizar
}
