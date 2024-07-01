import RPi.GPIO as GPIO
import time

# Configurar el modo de la placa
GPIO.setmode(GPIO.BCM)

# Configurar el pin GPIO 17 como entrada
GPIO.setup(17, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)

try:
    while True:
        # Leer el estado del botón
        button_state = GPIO.input(17)
        if button_state == GPIO.HIGH:
            print("Button Pressed")
        else:
            print("Button Released")
        time.sleep(0.1)
except KeyboardInterrupt:
    pass
finally:
    GPIO.cleanup()
