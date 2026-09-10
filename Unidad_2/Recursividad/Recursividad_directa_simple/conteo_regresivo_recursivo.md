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

4. Código

5. Prueba de escritorio

contar(5)
    -> imprime 5
    -> contar(4)
        -> imprime 4
        -> contar(3)
            -> imprime 3
            -> contar(2)
                -> imprime 2
                -> contar(1)
                    -> imprime 1
                    -> contar(0)
                        ->retorna

Salida:
- 5
- 4
- 3
- 2
- 1

6. Complejidad
- Temporal: O(n)
- Espacial: O(n) por la pila de llamadas