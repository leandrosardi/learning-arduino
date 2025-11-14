int sensorPin = A0;
int ledPin1 = 8;
int ledPin2 = 9;
int ledPin3 = 10;
int ledPin4 = 11;
int ledPin5 = 12;
int luz = 0;

void setup() {
    // declare the ledPin as an OUTPUT:
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(ledPin5, OUTPUT);
}

void loop() {
    // read the value from the sensor:
    luz = analogRead(sensorPin);

    if (luz<100) {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        digitalWrite(ledPin5, HIGH);
    } else
    if (luz<300) {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        digitalWrite(ledPin5, LOW);
    } else 
    if (luz<500) {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, LOW);
        digitalWrite(ledPin5, LOW);
    } else if (luz<700) {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        digitalWrite(ledPin5, LOW);
    } else if (luz<900) {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        digitalWrite(ledPin5, LOW);
    } else {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        digitalWrite(ledPin5, LOW);
    }
}