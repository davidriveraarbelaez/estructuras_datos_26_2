# Análisis del problema

1. Entradas

Datos  | Tipo   | Descripción
numero | entero | Valor ingresado por el usuario

Salidas:
- Clasificación de signo.
- Clasificación de paridad.
- Clasificación respecto a 100.

2. Estructura de datos

No se necesita ninguna estructura especial. Solo variables simples.

3. Pseudocódigo

Inicio
    Leer numero

    // Clasificación de signo
    Si numero > 0 entonces
        Mostrar "Positivo"
    Sino si numero < 0 entonces
        Mostrar "Negativo"
    Sino
        Mostrar "Cero"
    Fin Si

    // Clasificación de paridad
    Si numero mod 2 == 0 entonces
        Mostrar "Par"
    Sino
        Mostrar "Impar"
    Fin Si

    // Clasificación respecto a 100
    Si numero > 100 entonces
        Mostrar "Mayor que 100"
    Sino si numero < 100 entonces
        Mostrar "Menor que 100"
    Sino
        Mostrar "Igual a 100"
    Fin Si
Fin

4. Código

- Lectura del dato
- Clasificación de signo
- Clasificación de paridad
- Clasificación respecto a 100

5. Prueba escritorio

*Caso 1*

| Paso |                Condición |         Resultado |
|---|---|---|
| numero > 0 |          -7 > 0         |   Falso |
| numero < 0  |         -7 > 0        |    Verdadero --> "Negativo" |
| numero % 2 == 0 |      -7 % 2 == 0 |      Falso --> "Impar" |
| numero > 100     |    -7 > 100 |         Falso |
| numero < 100      |   -7 <100 |          Verdadero --> "Menor que 100" |

Salida esperada:
- Negativo
- Impar
- Menor que 100

*Caso 2: Entrada 200*

| Paso |                Condición |         Resultado |
|---|---|---|
| numero > 0 |          -7 > 0         |   Falso |
| numero < 0  |         -7 > 0        |    Verdadero --> "Negativo" |
| numero % 2 == 0 |      -7 % 2 == 0 |      Falso --> "Impar" |
| numero > 100     |    -7 > 100 |         Falso |
| numero < 100      |   -7 <100 |          Verdadero --> "Menor que 100" |

Salida esperada:
-
-
-

6. Complejidad
Temporal: O(1)
Espacial: O(1)