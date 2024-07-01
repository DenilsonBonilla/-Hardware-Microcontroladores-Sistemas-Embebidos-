import RPi.GPIO as GPIO
import time

# Configurar el modo de la placa
GPIO.setmode(GPIO.BCM)

# Configurar el pin GPIO 18 como salida
GPIO.setup(18, GPIO.OUT)

try:
    while True:
        # Encender el LED
        GPIO.output(18, GPIO.HIGH)
        time.sleep(1)
        # Apagar el LED
        GPIO.output(18, GPIO.LOW)
        time.sleep(1)
except KeyboardInterrupt:
    pass
finally:
    GPIO.cleanup()
