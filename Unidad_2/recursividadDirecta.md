# Recursividad directa simple

## Suma hasta n (iterativo vs recursivo)

### Enunciado

Implementar

int sumaHasta(int n);

Que calcule:

1+2+3+...+n

Implementar dos versiones: una con for y otra recursiva

### 1. Análisis del problema

**Entradas**

| Dato | Tipo | Descripción |
|---|---|---|
| n | entero | Límite superior de la suma |


**Salidas**
* Suma total

### 2. Pseudocódigo iterativo
c
funcion sumaHastaIterativo(n)
    total = 0
    Para i desde 1 hasta n hacer
        total = total + i
    Fin Para
    Retornar total
fin funcion

### 3. Pseudocódigo recursivo

funcion sumaHastaRecursivo(n)
    Si n == 0 entonces
        Retornar 0
    Fin Si

    Retornar n + sumaHastaRecursivo(n - 1)
fin funcion
