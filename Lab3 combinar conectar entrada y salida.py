import RPi.GPIO as GPIO
import time

# Configurar el modo de la placa
GPIO.setmode(GPIO.BCM)

# Configurar el pin GPIO 17 como entrada
GPIO.setup(17, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
# Configurar el pin GPIO 18 como salida
GPIO.setup(18, GPIO.OUT)

try:
    while True:
        # Leer el estado del botón
        button_state = GPIO.input(17)
        if button_state == GPIO.HIGH:
            # Encender el LED si el botón está presionado
            GPIO.output(18, GPIO.HIGH)
        else:
            # Apagar el LED si el botón no está presionado
            GPIO.output(18, GPIO.LOW)
        time.sleep(0.1)
except KeyboardInterrupt:
    pass
finally:
    GPIO.cleanup()
