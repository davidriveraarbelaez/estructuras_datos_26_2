# Taller 2 — Control de flujo y recursividad

## Tecnología en Desarrollo de Software

### Propósito

Este taller tiene como propósito practicar los conceptos del **Módulo 2 — Control de flujo y recursividad**, pasando progresivamente de la interpretación manual de algoritmos a la implementación en C++.

El taller trabaja:

- Estructuras condicionales.
- `if`, `else if`, `else`.
- `switch`.
- Ciclos `for`, `while` y `do-while`.
- Validación de entradas.
- Prueba de escritorio.
- Recursividad directa.
- Caso base y caso recursivo.
- Recursividad antes y después de la llamada.
- Comparación entre iteración y recursividad.
- Complejidad temporal y espacial.
- Análisis de la pila de llamadas.

> **Importante:** los ejercicios de este taller fueron diseñados para complementar el trabajo realizado durante el módulo y evitar repetir los ejercicios desarrollados en clase.

---

# 1. Recomendaciones de trabajo

Antes de programar:

1. Comprenda el problema.
2. Identifique las entradas.
3. Identifique las salidas.
4. Determine las variables necesarias.
5. Seleccione la estructura de control.
6. Escriba el pseudocódigo.
7. Realice una prueba de escritorio.
8. Implemente en C++.
9. Pruebe el programa por consola.
10. Analice la complejidad.

Para los ejercicios de recursividad, además:

1. Identifique el caso base.
2. Identifique el caso recursivo.
3. Verifique cómo se reduce el problema.
4. Represente algunas llamadas en la pila.
5. Determine qué ocurre durante el retorno de las llamadas.

---

# 2. Nivel 1 — Análisis y prueba de escritorio

Estos ejercicios deben resolverse **primero a mano**. No programe hasta haber determinado el resultado.

## Ejercicio 1. Decisiones encadenadas

Considere:

```cpp
int puntos = 73;
char categoria = 'B';

if (puntos >= 90) {
    categoria = 'A';
}
else if (puntos >= 70) {
    categoria = 'B';
}
else if (puntos >= 50) {
    categoria = 'C';
}
else {
    categoria = 'D';
}

cout << categoria;
```

### Actividades

a. Realice una prueba de escritorio.

b. Registre:

| Paso | puntos | Condición | ¿Verdadera? | categoria |
|---|---:|---|---|---|

c. Determine la salida.

d. Repita el análisis para:

- `puntos = 95`
- `puntos = 70`
- `puntos = 49`

e. Explique por qué solamente se ejecuta uno de los bloques.

---

## Ejercicio 2. Ciclo con `continue`

Analice:

```cpp
int suma = 0;

for (int i = 1; i <= 10; i++) {

    if (i % 2 == 0) {
        continue;
    }

    suma += i;
}

cout << suma;
```

### Actividades

a. Realice la prueba de escritorio.

b. Registre:

| Iteración | i | ¿Es par? | ¿Se ejecuta `suma += i`? | suma |
|---|---:|---|---|---:|

c. Determine la salida.

d. ¿Cuántas veces se ejecuta `suma += i`?

e. ¿Qué elementos se están acumulando?

f. ¿Cuál es la complejidad temporal?

---

## Ejercicio 3. Ciclo con `break`

Analice:

```cpp
int contador = 0;

for (int i = 1; i <= 20; i++) {

    contador++;

    if (i * i > 50) {
        break;
    }
}

cout << contador;
```

### Actividades

a. Realice la prueba de escritorio.

b. Determine el valor de `i` en el momento en que se ejecuta `break`.

c. Determine cuántas iteraciones reales realiza el ciclo.

d. Explique la diferencia entre:

```cpp
i * i > 50
```

y

```cpp
i <= 20
```

como condiciones del proceso.

e. ¿Cuál sería el peor caso si el límite superior fuera `n`?

---

## Ejercicio 4. `while` o `do-while`

Analice los dos fragmentos.

### Fragmento A

```cpp
int opcion = 0;

while (opcion != 0) {
    cout << "Ingrese una opcion: ";
    cin >> opcion;
}
```

### Fragmento B

```cpp
int opcion = 0;

do {
    cout << "Ingrese una opcion: ";
    cin >> opcion;
} while (opcion != 0);
```

### Actividades

a. ¿Cuántas veces se ejecuta el cuerpo del Fragmento A?

b. ¿Cuántas veces se ejecuta el cuerpo del Fragmento B?

c. ¿Cuál es la diferencia fundamental entre ambos?

d. Proponga una situación real en la que sea apropiado utilizar `do-while`.

e. Realice una prueba de escritorio del Fragmento B utilizando las entradas:

```text
3
2
5
0
```

---

# 3. Nivel 2 — Codificación: control de flujo

## Ejercicio 5. Validación de una nota

Desarrolle un programa que solicite una nota entre `0.0` y `5.0`.

El programa debe:

1. Solicitar la nota.
2. Verificar que esté dentro del rango.
3. Si es inválida, volver a solicitarla.
4. Cuando sea válida, clasificarla:

- `4.5` a `5.0`: Excelente.
- `4.0` a menos de `4.5`: Muy buena.
- `3.0` a menos de `4.0`: Aprobada.
- Menor de `3.0`: Reprobada.

### Restricciones

- Utilizar `do-while` para la validación.
- Utilizar `if / else if / else` para la clasificación.
- Implementar la clasificación mediante una función.
- No utilizar arreglos.

### Prueba

Probar al menos:

```text
-1
6
2.8
4.2
```

### Entregables

- Pseudocódigo.
- Código C++.
- Evidencia de ejecución.
- Prueba de escritorio.
- Complejidad temporal y espacial.

---

## Ejercicio 6. Estadísticas hasta encontrar un valor de corte

Desarrolle un programa que permita ingresar números enteros hasta que el usuario introduzca `-1`.

El programa debe mostrar:

- Cantidad de números ingresados.
- Cantidad de positivos.
- Cantidad de negativos.
- Cantidad de pares.
- Cantidad de impares.
- Suma de los números.
- Promedio.

El `-1` debe funcionar únicamente como valor de terminación y **no debe incluirse en las estadísticas**.

### Restricciones

- Utilizar `while`.
- No solicitar previamente la cantidad de números.
- Utilizar funciones para las estadísticas.
- Validar el caso en el que el usuario introduzca `-1` inmediatamente.

### Pregunta de análisis

¿Qué diferencia existe entre resolver este problema con `while` y resolverlo con un `for` cuyo número de iteraciones sea conocido?

---

## Ejercicio 7. Conversor de unidades con menú

Desarrolle un programa que muestre repetidamente:

```text
=== CONVERSOR ===
1. Celsius a Fahrenheit
2. Fahrenheit a Celsius
3. Kilómetros a millas
4. Millas a kilómetros
0. Salir
```

El programa debe:

- Utilizar `switch`.
- Utilizar `do-while`.
- Validar opciones.
- No permitir continuar con una opción diferente de `0` a `4`.
- Separar cada conversión en una función.

### Ejemplo

```text
Seleccione: 1
Temperatura en Celsius: 25

Resultado: 77 F
```

### Entregables

Además del código, presentar una prueba de escritorio que incluya:

```text
1
3
8
0
```

y explicar qué ocurre en cada iteración del menú.

---

## Ejercicio 8. Serie controlada por condición

Desarrolle un programa que solicite un número entero positivo `n` y muestre los números desde `1` hasta `n`, pero aplicando las siguientes reglas:

- Si el número es múltiplo de 3, mostrar `FIZZ`.
- Si es múltiplo de 5, mostrar `BUZZ`.
- Si es múltiplo de 3 y 5, mostrar `FIZZBUZZ`.
- En los demás casos, mostrar el número.

### Ejemplo

Para:

```text
n = 16
```

la salida debe contener:

```text
1
2
FIZZ
4
BUZZ
FIZZ
7
8
FIZZ
BUZZ
11
FIZZ
13
14
FIZZBUZZ
16
```

### Condiciones

- Utilizar un ciclo.
- Utilizar decisiones.
- Crear una función para determinar qué debe mostrarse.
- Realizar una prueba de escritorio con `n = 15`.

---

# 4. Nivel 3 — Recursividad

## Ejercicio 9. Suma de dígitos

Desarrolle:

```cpp
int sumaDigitos(int n);
```

La función debe retornar la suma de los dígitos de un número entero positivo.

### Ejemplo

```text
sumaDigitos(472) → 13
```

porque:

```text
4 + 7 + 2 = 13
```

### Restricciones

- No utilizar ciclos dentro de `sumaDigitos`.
- Utilizar recursividad.
- Debe existir un caso base.
- Cada llamada debe reducir el problema.

### Actividades

a. Identifique el caso base.

b. Identifique el caso recursivo.

c. Represente:

```text
sumaDigitos(472)
sumaDigitos(47)
sumaDigitos(4)
...
```

d. Analice la pila de llamadas.

e. Determine la complejidad temporal y espacial.

---

## Ejercicio 10. Contar dígitos

Implemente:

```cpp
int contarDigitos(int n);
```

La función debe retornar cuántos dígitos tiene un número.

### Ejemplos

```text
contarDigitos(8)     → 1
contarDigitos(45)    → 2
contarDigitos(7391)  → 4
```

### Restricciones

- No utilizar ciclos.
- No convertir el número a `string`.
- Utilizar recursividad.

### Prueba de escritorio

Realizar la expansión completa para:

```text
contarDigitos(5826)
```

---

## Ejercicio 11. Máximo común divisor

Implemente:

```cpp
int mcd(int a, int b);
```

utilizando el algoritmo de Euclides de forma recursiva.

### Ejemplo

```text
mcd(48, 18) → 6
```

### Actividades

Representar las llamadas:

```text
mcd(48,18)
mcd(18,12)
mcd(12,6)
mcd(6,0)
```

Luego responder:

a. ¿Cuál es el caso base?

b. ¿Cómo disminuye el problema?

c. ¿Qué valor retorna cada llamada al regresar?

d. ¿Cuál es la complejidad temporal aproximada?

---

## Ejercicio 12. Palíndromo recursivo

Implemente:

```cpp
bool esPalindromo(string texto, int inicio, int fin);
```

La función debe determinar si una cadena se lee igual de izquierda a derecha y de derecha a izquierda.

### Ejemplos

```text
"reconocer" → verdadero
"radar"     → verdadero
"software"  → falso
```

### Restricciones

- No utilizar ciclos.
- No utilizar una segunda cadena para invertir el texto.
- Utilizar recursividad.

### Actividades

Para:

```text
"radar"
```

mostrar la secuencia de llamadas:

```text
esPalindromo("radar", 0, 4)
esPalindromo("radar", 1, 3)
esPalindromo("radar", 2, 2)
```

y explicar dónde se alcanza el caso base.

---

## Ejercicio 13. Contar ocurrencias de un valor

Dado:

```cpp
int datos[] = {4, 7, 4, 2, 4, 9, 7};
```

implemente:

```cpp
int contarOcurrencias(int datos[], int n, int valor);
```

La función debe retornar cuántas veces aparece `valor`.

### Pruebas

```text
contarOcurrencias(datos, 7, 4) → 3
contarOcurrencias(datos, 7, 7) → 2
contarOcurrencias(datos, 7, 5) → 0
```

### Restricciones

- No utilizar ciclos dentro de la función.
- Utilizar recursividad.
- No modificar el arreglo.

### Análisis

Indique:

- Caso base.
- Caso recursivo.
- Reducción del problema.
- Número máximo de llamadas.
- Complejidad temporal.
- Complejidad espacial por la pila.

---

## Ejercicio 14. Mostrar una cadena al revés

Implemente:

```cpp
void mostrarReverso(string texto, int posicion);
```

La función debe mostrar los caracteres desde el último hasta el primero.

### Ejemplo

```text
Entrada:
estructura

Salida:
arutcurtse
```

### Restricciones

- No utilizar ciclos.
- No crear otra cadena.
- Utilizar recursividad.

### Reto adicional

Modifique la función para mostrar primero la cadena normalmente y luego al revés utilizando dos funciones recursivas diferentes.

---

# 5. Nivel 4 — Iteración vs. recursividad

## Ejercicio 15. Dos soluciones para contar ocurrencias

Utilice el ejercicio 13 como base.

Implemente:

```cpp
int contarOcurrenciasIterativo(int datos[], int n, int valor);

int contarOcurrenciasRecursivo(int datos[], int n, int valor);
```

Ambas funciones deben producir el mismo resultado.

### Actividades

Construya una tabla:

| Criterio | Iterativa | Recursiva |
|---|---|---|
| Número de operaciones principales | | |
| Tiempo | | |
| Memoria adicional | | |
| Uso de pila | | |
| Legibilidad | | |
| Complejidad temporal | | |
| Complejidad espacial | | |

### Pregunta

¿En este problema la recursividad aporta una ventaja clara o simplemente representa otra forma de resolverlo? Justifique con criterios técnicos.

---

## Ejercicio 16. ¿Dónde debe estar la instrucción?

Analice:

### Versión A

```cpp
void procesar(int n) {

    if (n == 0)
        return;

    cout << n << " ";
    procesar(n - 1);
}
```

### Versión B

```cpp
void procesar(int n) {

    if (n == 0)
        return;

    procesar(n - 1);
    cout << n << " ";
}
```

### Actividades

a. Determine la salida de:

```cpp
procesar(5);
```

para cada versión.

b. Realice la representación de la pila de llamadas.

c. Explique qué ocurre durante la fase de descenso.

d. Explique qué ocurre durante la fase de retorno.

e. Modifique la función para producir:

```text
5 4 3 2 1 1 2 3 4 5
```

sin utilizar ciclos.

---

# 6. Análisis de complejidad

Determine la complejidad temporal de cada función.

## A

```cpp
void ejercicioA(int n) {

    for (int i = 0; i < n; i++) {
        cout << i;
    }
}
```

## B

```cpp
void ejercicioB(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cout << i << j;
        }
    }
}
```

## C

```cpp
void ejercicioC(int n) {

    if (n == 0)
        return;

    ejercicioC(n - 1);
}
```

## D

```cpp
void ejercicioD(int n) {

    if (n <= 1)
        return;

    ejercicioD(n - 1);
    ejercicioD(n - 1);
}
```

### Para cada caso

1. Identifique qué representa `n`.
2. Determine cuántas veces se ejecuta la operación principal.
3. Determine la complejidad temporal.
4. Determine, cuando corresponda, la complejidad espacial.
5. Explique qué ocurre al aumentar `n`.

---

# 7. Prueba de escritorio de recursividad

Considere:

```cpp
int calcular(int n) {

    if (n <= 1)
        return 1;

    return n + calcular(n - 2);
}
```

### Actividades

Para:

```cpp
calcular(7)
```

realice:

### A. Descenso

Represente:

```text
calcular(7)
    ↓
calcular(5)
    ↓
calcular(3)
    ↓
calcular(1)
```

### B. Retorno

Complete:

```text
calcular(1) → ?
calcular(3) → ?
calcular(5) → ?
calcular(7) → ?
```

### C. Análisis

Indique:

- Caso base.
- Caso recursivo.
- Cómo se reduce el problema.
- Número de llamadas.
- Complejidad temporal.
- Complejidad espacial.

---

# 8. Reto integrador — Sistema de procesamiento de números

Desarrolle un programa que permita procesar una colección de números enteros.

El sistema debe mostrar:

```text
=== PROCESAMIENTO DE NÚMEROS ===

1. Ingresar datos
2. Mostrar datos
3. Contar pares
4. Contar impares
5. Sumar dígitos de un número
6. Contar ocurrencias de un valor
7. Mostrar datos en reverso
8. Salir
```

## Requisitos

### Opción 1. Ingresar datos

Permitir almacenar hasta 10 números en un arreglo.

### Opción 2. Mostrar datos

Mostrar los elementos almacenados.

### Opción 3. Contar pares

Determinar cuántos números son pares.

### Opción 4. Contar impares

Determinar cuántos números son impares.

### Opción 5. Sumar dígitos

Solicitar un número y utilizar la función recursiva del ejercicio 9.

### Opción 6. Contar ocurrencias

Solicitar un valor y utilizar la función recursiva del ejercicio 13.

### Opción 7. Mostrar datos en reverso

Mostrar los elementos utilizando una función recursiva.

### Opción 8. Salir

Finalizar el programa.

## Condiciones

El programa debe:

- Utilizar `switch`.
- Utilizar `do-while` para el menú.
- Utilizar funciones.
- Utilizar al menos **tres funciones recursivas**.
- Validar la cantidad de datos.
- Validar que no se consulte el arreglo cuando todavía no existen datos.
- No utilizar `vector`.
- No utilizar funciones prediseñadas para resolver las operaciones principales.
- Documentar la complejidad de cada operación.

---

# 9. Pruebas obligatorias del reto

El programa debe probarse con al menos:

```text
5
8
5
12
5
3
```

Realizar:

### Prueba 1
Mostrar los datos.

### Prueba 2
Contar pares.

### Prueba 3
Contar impares.

### Prueba 4
Sumar los dígitos de:

```text
472
```

### Prueba 5
Contar cuántas veces aparece:

```text
5
```

### Prueba 6
Mostrar los datos en reverso.

### Prueba 7
Intentar consultar antes de ingresar datos.

### Prueba 8
Seleccionar una opción inválida.

---

# 10. Entregables

Para los ejercicios de codificación:

1. Código fuente `.cpp`.
2. Evidencia de ejecución por consola.
3. Pseudocódigo.
4. Prueba de escritorio.
5. Complejidad temporal.
6. Complejidad espacial cuando corresponda.
7. Explicación breve de las decisiones tomadas.

Para los ejercicios de recursividad se debe incluir además:

- Caso base.
- Caso recursivo.
- Reducción del problema.
- Representación de la pila de llamadas en al menos un caso.
- Explicación del proceso de retorno.

---

# 11. Formato sugerido para las pruebas de escritorio

## Algoritmos iterativos

| Iteración | Variable de control | Condición | Variables principales | Salida |
|---|---:|---|---|---|

## Algoritmos recursivos

| Llamada | Parámetros | ¿Caso base? | Resultado pendiente | Resultado al retornar |
|---|---|---|---|---|

---

# 12. Lista de comprobación

Antes de entregar, verifique:

- [ ] Comprendí el problema antes de programar.
- [ ] Identifiqué entradas y salidas.
- [ ] Realicé pseudocódigo.
- [ ] Realicé prueba de escritorio.
- [ ] Probé el programa por consola.
- [ ] Validé entradas cuando era necesario.
- [ ] Identifiqué el caso base en las funciones recursivas.
- [ ] Identifiqué el caso recursivo.
- [ ] Verifiqué que cada llamada se acerque al caso base.
- [ ] Analicé la complejidad.
- [ ] Revisé los casos límite.
- [ ] Mi solución no utiliza estructuras o funciones que no están permitidas.

---

# 13. Preguntas de reflexión

1. ¿Cuándo resulta más natural utilizar `for`?
2. ¿Cuándo resulta más natural utilizar `while`?
3. ¿Por qué `do-while` es útil para menús y validaciones?
4. ¿Qué diferencia existe entre `break` y `continue`?
5. ¿Qué dos componentes debe tener una función recursiva?
6. ¿Qué ocurre en memoria cuando una función recursiva realiza muchas llamadas?
7. ¿Por qué una solución recursiva puede utilizar más memoria que una iterativa?
8. ¿Por qué no debemos utilizar recursividad únicamente porque es posible?
9. ¿Qué características hacen que un problema sea apropiado para recursividad?
10. ¿Qué información debe analizarse antes de decidir entre una solución iterativa y una recursiva?
