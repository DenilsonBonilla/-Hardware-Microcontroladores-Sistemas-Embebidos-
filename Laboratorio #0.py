import sys
import numpy as np
import matplotlib.pyplot as plt
import os

# 1. Ver versión de Python
print("Versión de Python:", sys.version)

# 2. Crear programa Hello World
print("Hello World")

# 3. Importar módulos
# (ya se han importado al inicio del archivo)

# 4. Definir una estructura de datos (lista, diccionario, matriz)
mi_lista = [1, 2, 3, 4, 5]
mi_diccionario = {"nombre": "Juan", "edad": 30, "ciudad": "Madrid"}
mi_matriz = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])

# 5. Definir ciclo for para imprimir una lista (for)
print("Usando for:")
for elemento in mi_lista:
    print(elemento)

# 5. Definir ciclo while para imprimir una lista (while)
print("Usando while:")
i = 0
while i < len(mi_lista):
    print(mi_lista[i])
    i += 1
