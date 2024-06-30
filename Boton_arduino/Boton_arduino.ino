const int buttonPin = 2;  // Pin al que está conectado el botón
int buttonState = 0;      // Variable para almacenar el estado del botón

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Configura el pin del botón como entrada con resistencia pull-up interna
  Serial.begin(9600);               // Inicializa la comunicación serie
}

void loop() {
  buttonState = digitalRead(buttonPin); // Lee el estado del botón

  if (buttonState == LOW) { // El botón está presionado
    Serial.println("Botón presionado");
  } else { // El botón no está presionado
    Serial.println("Botón no presionado");
  }
  delay(500); // Pausa para evitar demasiadas lecturas rápidas
}
