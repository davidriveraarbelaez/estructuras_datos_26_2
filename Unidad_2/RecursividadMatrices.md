# Recursividad con matrices

## Ejercicio

Dada la matriz

double notas[5][4];

Implementar:

double sumaFila(double matriz[][4], int fila, int columnas);

Que calcule la suma de una fila específica de forma recursiva.

### 1. Análisis del problema

**Entradas**

| Dato | Tipo | Descripción |
|---|---|---|
| matriz[][4] | matriz de double | Notas |
| fila | entero | Fila a sumar |
| columnas | entero | Cantidad de columnas |

**Salidas**

* Suma de la fila especificada

### 2. Pseudocódigo

funcion sumaFila(matriz, fila, columnas)
    Si columnas == 0 entonces
        Retornar 0
    Fin Si

    Retornar matriz[fila][columnas - 1] + sumaFila(matriz, fila, columnas - 1)
fin funcion