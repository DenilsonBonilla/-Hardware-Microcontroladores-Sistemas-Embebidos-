// Definición de pines
const int ledPin = 13;   // Pin al que está conectado el LED
const int buttonPin = 2; // Pin al que está conectado el botón

// Variable para almacenar el estado del botón
int buttonState = 0;

void setup() {
  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
  
  // Configurar el pin del botón como entrada con resistencia pull-up interna
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Leer el estado del botón
  buttonState = digitalRead(buttonPin);

  // Si el botón está presionado (el estado es LOW debido a la pull-up interna)
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH); // Encender el LED
  } else {
    digitalWrite(ledPin, LOW); // Apagar el LED
  }
}
