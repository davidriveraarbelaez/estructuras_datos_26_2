# Recursividad indirecta

## Ejercicio. Funciones A y B alternadas

Implementar dos funciones que se llamen mutuamente:
* **funcionA(n)** imprime **"A:n"** y llama a **funcionB(n-1)**
* **funcionB(n)** imprime **"B:n"** y llama a **funcionA(n-1)**

Ambas deben detenerse cuando **n<=0**.

