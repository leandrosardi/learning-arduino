## Guía para Descargar (Subir) un Programa al Arduino

### 1. Conectar la placa

* Usa un **cable USB** (original o de buena calidad).
* Conecta la placa Arduino al puerto USB de la computadora.
* Verifica que el LED **ON** del Arduino se encienda.

---

### 2. Seleccionar la placa en Arduino IDE

1. Abre el **Arduino IDE**.
2. En la barra superior, haz clic en **Select Board**.
3. Si el IDE detecta tu placa automáticamente, deberías ver algo como:

   * `Arduino Uno on /dev/ttyACM0` (Linux)
   * `Arduino Uno on COM3` (Windows)
4. Si no aparece, selecciona manualmente:

   * Haz clic en **Select Other Board and Port**.
   * Elige tu modelo de placa (por ejemplo, *Arduino Uno*).
   * Selecciona el puerto correcto.

---

### 3. Verificar el código

* Haz clic en el ícono **✔️ (Check)** ubicado en la esquina superior izquierda.
* El IDE compilará el programa y mostrará mensajes en la consola.
* Si no hay errores, el programa está listo para subirse.

---

### 4. Subir el programa

* Haz clic en la **flecha → (Upload)** junto al ícono de verificación.
* El IDE:

  1. Compila el sketch.
  2. Lo carga en la placa Arduino.
  3. Muestra el mensaje `Done uploading` al finalizar.

---

### 5. Probar el funcionamiento

Puedes probar con el programa **Blink** (parpadeo del LED integrado):

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Enciende el LED
  delay(1000);                     // Espera 1 segundo
  digitalWrite(LED_BUILTIN, LOW);  // Apaga el LED
  delay(1000);                     // Espera 1 segundo
}
```

Guarda el sketch, verifica y súbelo. El LED integrado del Arduino debería parpadear cada segundo.

---

### 6. Solución de problemas

* Si el IDE no detecta el puerto:

  * Revisa el cable USB.
  * Prueba otro puerto.
  * En Linux, asegúrate de tener permisos (`sudo usermod -a -G dialout tu_usuario`).
* Si la carga falla:

  * Presiona el botón **RESET** del Arduino justo antes o durante la carga.
  * Verifica que la placa y el puerto correctos estén seleccionados.
