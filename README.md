## Learning Arduino

Just some Arduino example and documentation.

### 1. Entendiendo el Protobard.

Mirar [este video](https://www.youtube.com/watch?v=_3FNx3Bp5IA) para aprender a utilizar el protboard

### 2. Voltaje de operación de los LED

El voltaje que soporta un LED depende de su **color y tipo**. En la siguiente tabla se muestran los valores típicos de **caída de voltaje directa (Vf)** y la **corriente recomendada**:

| Color del LED | Caída de voltaje (Vf) típica | Corriente recomendada |
| ------------- | ---------------------------- | --------------------- |
| Rojo          | 1.8 – 2.2 V                  | 10 – 20 mA            |
| Amarillo      | 2.0 – 2.2 V                  | 10 – 20 mA            |
| Verde         | 2.0 – 3.0 V                  | 10 – 20 mA            |
| Azul          | 3.0 – 3.5 V                  | 10 – 20 mA            |
| Blanco        | 3.0 – 3.5 V                  | 10 – 20 mA            |

**Explicación:**

- El **voltaje directo (forward voltage)** es el voltaje necesario para que el LED empiece a conducir corriente y emitir luz.
- Si se aplica **más voltaje directamente** (sin una resistencia limitadora), el LED puede **quemarse instantáneamente**, ya que la corriente se eleva rápidamente.
- Por ello, siempre se debe usar una **resistencia en serie** para limitar la corriente a un valor seguro (normalmente entre **10 mA y 20 mA**).

**Ejemplo práctico:**

Si alimentas un LED rojo (2 V) con una fuente de 5 V, la resistencia ideal se calcula así:

```text
R = (Vfuente - VLED) / I = (5V - 2V) / 0.02A = 150 Ω
```

Esto limita la corriente y protege al LED de sobrecorriente.

### 3. Entnediendo Resistencias

Mirar [este video](https://www.youtube.com/watch?v=YdaiLW4WOWo) sobre cómo calcular el valor de una resistencia con el **código de colores**.

### 4. Installing Arduino IDE

Installing Arduino IDE on **Ubuntu 22.04**:

1. Download Arduino IDE from [https://www.arduino.cc/en/software/#ide](https://www.arduino.cc/en/software/#ide)

2. Install the executable. 

```
sudo mv ~/Downloads/arduino-ide_2.3.6_Linux_64bit.AppImage /usr/bin
sudo chmod +x /usr/bin/arduino-ide_2.3.6_Linux_64bit.AppImage
sudo mv /usr/bin/arduino-ide_2.3.6_Linux_64bit.AppImage /usr/bin/arduino-ide
```

3. The FUSE library (libfuse2) is required.

**Ubuntu 22.04** and newer versions often come without `libfuse2`, because they use `libfuse3` by default. But `arduino-ide` bundles still expect version 2.

```
sudo apt install libfuse2
```

4. Run Arduino IDE

```
arduino-ide
```





