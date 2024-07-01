#include <Arduino_FreeRTOS.h>

void TaskBlink(void *pvParameters);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  xTaskCreate(
    TaskBlink,
    "Blink",
    128,
    NULL,
    2,
    NULL
  );
}

void loop() {
  // No se usa en FreeRTOS
}

void TaskBlink(void *pvParameters) {
  while(1) {
    digitalWrite(LED_BUILTIN, HIGH);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    digitalWrite(LED_BUILTIN, LOW);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}
