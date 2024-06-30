
const int ledPin = 13;

void setup() {
  // Configura el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Enciende el LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // Espera 1 segundo (1000 milisegundos)

  // Apaga el LED
  digitalWrite(ledPin, LOW);
  delay(1000); // Espera 1 segundo (1000 milisegundos)
}
