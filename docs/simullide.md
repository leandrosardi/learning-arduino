# Guía Paso a Paso

## Diseñar y Emular un Proyecto Básico de Arduino Uno en SimulIDE

---

## 1. ¿Qué vamos a construir?

Vamos a crear y simular el proyecto más básico posible:

> **Un LED conectado al pin 13 del Arduino Uno que parpadea cada 1 segundo**

Este ejemplo permite aprender:

* Cómo crear un circuito en SimulIDE
* Cómo cargar código Arduino
* Cómo ejecutar la simulación
* Cómo documentar el circuito

---

## 2. Requisitos previos

### 2.1 Software necesario

* **SimulIDE** (versión estable)
* **Arduino IDE** (solo para compilar el código)

Compatible con:

* Windows 11
* Linux Ubuntu

---

## 3. Crear un nuevo proyecto en SimulIDE

1. Abrir **SimulIDE**
2. Menú:

   ```
   File → New
   ```
3. Guardar el proyecto:

   ```
   File → Save As → led_blink.sim1
   ```

---

## 4. Agregar el Arduino Uno

1. Panel izquierdo:

   ```
   Microcontrollers → Arduino
   ```
2. Arrastrar **Arduino Uno** al área de trabajo
3. Colocarlo en el centro del lienzo

---

## 5. Agregar los componentes del circuito

### 5.1 Componentes necesarios

| Componente       | Cantidad |
| ---------------- | -------- |
| LED              | 1        |
| Resistencia 220Ω | 1        |
| Cable            | Varios   |

---

### 5.2 Agregar el LED

1. Panel izquierdo:

   ```
   Outputs → LED
   ```
2. Arrastrar el LED al lienzo
3. Colocarlo cerca del pin 13

---

### 5.3 Agregar la resistencia

1. Panel izquierdo:

   ```
   Passive → Resistor
   ```
2. Arrastrar la resistencia
3. Doble clic y establecer el valor en:

   ```
   220 ohm
   ```

---

## 6. Cableado del circuito

Conectar los componentes de la siguiente manera:

```
Arduino Pin 13 → Resistencia → Ánodo del LED
Cátodo del LED → GND del Arduino
```

### Pasos

1. Seleccionar la herramienta **Wire**
2. Conectar:

   * Pin 13 del Arduino → Resistencia
   * Resistencia → pata larga del LED
   * Pata corta del LED → GND

---

## 7. Escribir el código Arduino

Crear un nuevo sketch en Arduino IDE:

```cpp
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
```

---

## 8. Compilar el código para SimulIDE

SimulIDE requiere el archivo compilado `.hex`.

### 8.1 Compilación

1. En Arduino IDE:

   ```
   Sketch → Export Compiled Binary
   ```
2. Se generará el archivo:

   ```
   led_blink.ino.hex
   ```

---

## 9. Cargar el programa en SimulIDE

1. Doble clic sobre el **Arduino Uno**
2. En el campo **Firmware**, seleccionar:

   ```
   led_blink.ino.hex
   ```
3. Verificar el modelo:

   ```
   Arduino Uno (ATmega328P)
   ```

---

## 10. Ejecutar la simulación

1. Presionar ▶ **Run**
2. El LED debe parpadear cada segundo
3. Para detener la simulación, presionar **Stop**

---

## 11. Depuración básica

Si el LED no enciende:

* Verificar la polaridad del LED
* Revisar la conexión a GND
* Confirmar que el archivo `.hex` sea el correcto

---

## 12. Documentar el circuito

### 12.1 Exportar imagen

1. Ajustar el zoom del circuito
2. Usar:

   ```
   File → Screenshot
   ```

   o captura de pantalla del sistema
3. Guardar como:

   ```
   arduino_led_blink.png
   ```

---

## 13. Estructura recomendada del proyecto

```
arduino_led_blink/
├── led_blink.ino
├── led_blink.hex
├── led_blink.sim1
└── arduino_led_blink.png
```

---

## 14. Próximos pasos

* Botón + LED
* Potenciómetro + ADC
* Servo motor
* Sensor analógico
* Comunicación Serial

---

## 15. Conclusión

SimulIDE es una herramienta ideal para aprendizaje, prototipado rápido y documentación visual de proyectos Arduino. No reemplaza al hardware real, pero acelera el diseño y validación inicial.
