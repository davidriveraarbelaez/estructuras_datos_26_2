# Fibonacci - Tres enfoques

**Enunciado**

Implementar la sucesión de Fibonacci.

F(0) = 0, 
F(1) = 1, 
F(n) = F(n-1) + F(n-2)

Tres versioneS: 
1. Recursiva
2. Recursiva con memoización
3. Iterativa

1. Análisis del problema

**Entradas**

| Dato | Tipo | Descripción |
|------|------|-------------|
| n | entero | Posición en la sucesión |

**Salidas**
* Valor de F(n)

2A. Pseuducódigo recursivo

```
funcion fibonacci(n):
    si n == 0:
        retornar 0
    fin si

    si n == 1:
        retornar 1
    retornar fibonacci(n-1) + fibonacci(n-2)
fin funcion
```

2B. Pseuducódigo recursiva con memoización

```
funcion fibonacci_memo(n, memo):
    si n == 0:
        retornar 0
    fin si

    si n == 1:
        retornar 1
    fin si

    si yaCalculado[n] entonces
        Retornar memo[n]
    fin si

    memo[n] = fibonacci_memo(n-1) + fibonacci_memo(n-2)
    yaCalculado[n] = verdadero
    retornar memo[n]
fin funcion
```

2C. Pseuducódigo iterativa

```
funcion fibonacci_iterativo(n):
    si n == 0:
        retornar 0
    fin si

    si n == 1:
        retornar 1
    fin si

    anterior = 0
    actual = 1
    para i desde 2 hasta n:
        siguiente = anterior + actual
        anterior = actual
        actual = siguiente
    fin para
    retornar actual
fin funcion
```