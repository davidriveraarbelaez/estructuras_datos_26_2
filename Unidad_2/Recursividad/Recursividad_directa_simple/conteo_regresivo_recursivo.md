# Ejercicio 1. Recursividad directa simple

## Conteo regresivo recursivo.

Implementar una función recursiva que cuente desde n hasta 1.

´´´cpp
void contar(int n);
´´´

*Restricción: no usar ciclos*

1. Análisis del problema.

Entradas

| Dato | Tipo | Descripción |
| n | Entero | Número desde el cual contar |

Salidas:
- Impresión de los números desde n hasta 1.

2. Estructuras de datos.

No se necesita estructura. Solo la pila de llamadas.

3. Pseudocódigo.

función contar()
    Si n == 0 entonces
        Retornar // caso base
    Fin Si

    Mostar n
    contar(n-1) // Caso recursivo
fin función