# Cuestionario

1. ¿Qué ventajas tiene un arreglo frente a declarar 5 variables independientes?
2. ¿Por qué los índices comienzan en 0?
3. ¿Qué ocurre si se intenta acceder a una posición que no existe?
4. ¿En qué situaciones reales sería útil emplear un arreglo?

# Ejercicios propuestos

## Ejercicios básicos

### Nivel 1 — Fundamentos

1. Leer 10 números y mostrarlos en orden inverso.
2. Contar cuántos números positivos, negativos y ceros existen.
3. Encontrar el mayor y el menor elemento.
4. Calcular la suma y promedio.
5. Determinar si un número está presente.
6. Contar cuántas veces aparece un valor.

## Ejercicios intermedios

### Nivel 2 — Pensamiento algorítmico

1. Invertir un arreglo sin crear otro arreglo.
2. Eliminar elementos repetidos.
3. Determinar el segundo mayor elemento.
4. Rotar los elementos una posición a la derecha.
5. Combinar dos arreglos.
6. Ordenar los elementos de menor a mayor.
7. Comparar dos arreglos.

## Ejercicios con matrices

### Nivel 3 — Arreglos bidimensionales

1. Sumar todos los elementos.
2. Calcular suma de cada fila.
3. Calcular suma de cada columna.
4. Obtener diagonal principal.
5. Obtener diagonal secundaria.
6. Determinar si una matriz es simétrica.
7. Transponer una matriz.
8. Buscar un valor y retornar fila/columna.

## Ejercicios de complejidad

Determinar la complejidad:

1.
```cpp
cout << datos[0];
```
2.
```cpp
for(int i = 0; i < n; i++)
    cout << datos[i];
```

3. 
```cpp
for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
        cout << datos[i][j];
```

4. 
```cpp
for(int i = 0; i < n; i++)
    for(int j = 0; j < 10; j++)
        cout << datos[i];
```

## Prueba de escritorio

1. Considere el siguiente código:
```cpp
int datos[6] = {12, 7, 25, 18, 9, 30};

datos[1] = 20;
datos[4] = 15;

for(int i = 0; i < 6; i++){
    cout << datos[i] << " ";
}
```

**Actividades**

a. Represente el arreglo inicialmente indicando:
- índice
- valor

b. Realice una prueba de escritorio después de cada modificación.

c. Determine cuál será la salida del programa.

d. Indique cuántas veces se ejecuta el ciclo for.

e. ¿Cuál es la complejidad temporal del recorrido?

2. Prueba de escritorio de una búsqueda. Considere:

```cpp
int datos[8] = {15, 8, 23, 42, 4, 16, 9, 31};

int buscar = 16;
bool encontrado = false;
int posicion = -1;

for(int i = 0; i < 8; i++){

    if(datos[i] == buscar){
        encontrado = true;
        posicion = i;
        break;
    }
}
```

**Actividades**

Realice una tabla de prueba de escritorio:

| Iteración | i | datos[i] | buscar | ¿Son iguales? | encontrado | posicion |

Luego responda:

a. ¿En qué posición se encuentra el valor?
b. ¿Cuántas comparaciones se realizaron?
c. ¿Qué ocurriría si buscar = 50?
d. ¿Cuál es la complejidad en el peor caso?

3. Prueba de escritorio con matriz. Considere:

```cpp
int matriz[3][3] = {
    {2, 4, 6},
    {1, 3, 5},
    {7, 8, 9}
};

int suma = 0;

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        suma += matriz[i][j];
    }
}

cout << suma;
```

**Actividades**
a. Realice la prueba de escritorio.
b. Registre los valores de i, j, matriz[i][j] y suma.
c. Determine el valor final de suma.
d. ¿Cuántas veces se ejecuta la instrucción suma += matriz[i][j]?
e. ¿Cuál es la complejidad del algoritmo?

## Complejidad algorítmica

1. ¿Cuánto trabajo realiza cada algoritmo?Determine la complejidad temporal de cada fragmento y justifique su respuesta.

A. 
```cpp
cout << datos[0];
```

B.
```cpp
for(int i = 0; i < n; i++){
    cout << datos[i];
}
```
C.
```cpp
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout << datos[i][j];
    }
}
```
D.
```cpp
for(int i = 0; i < n; i++){
    for(int j = 0; j < 10; j++){
        cout << datos[i];
    }
}
```

Para cada caso:
a. Identifique qué representa n.
b. Determine aproximadamente cuántas veces se ejecuta la operación principal.
c. Indique la complejidad Big O.
d. Explique qué sucede cuando aumenta n.

## Arreglos unidimensionales — Codificación

1. **Estadísticas de un arreglo** Desarrolle un programa que permita ingresar n números enteros y almacenarlos en un arreglo. El programa debe mostrar:
- Los elementos ingresados.
- La suma.
- El promedio.
- El mayor elemento.
- El menor elemento.
- La cantidad de números pares.
- La cantidad de números impares.
- La posición del mayor elemento.

**Restricciones**
- No utilizar vector.
- Utilizar un arreglo.
- Utilizar ciclos.
- Utilizar funciones.
- No utilizar funciones prediseñadas de ordenamiento.

**Evidencias**
El estudiante debe presentar:
a. Código fuente.
b. Captura de la ejecución por consola.
c. Prueba de escritorio utilizando al menos 5 datos.
d. Complejidad temporal de la solución.

2. **Búsqueda con contador de comparaciones**. Desarrolle un programa que permita:
a. Ingresar n números enteros.
b. Mostrar el arreglo.
c. Solicitar un valor a buscar.
d. Indicar si el valor existe.
e. Indicar la posición donde fue encontrado.
f. Indicar cuántas comparaciones fueron necesarias.

**Ejemplo:**

```cpp
Arreglo:
15 8 23 42 4 16 9 31

Valor a buscar: 16

Resultado:
Valor encontrado
Posición: 5
Comparaciones realizadas: 6
```

**Condiciones**
La búsqueda debe detenerse cuando encuentre el elemento.

**Entregables**
- Código.
- Prueba por consola.
- Prueba de escritorio.
- Análisis de complejidad.

**Pregunta de análisis**
¿Qué ocurre con el número de comparaciones si el elemento buscado:
a. está en la primera posición?
b. está en la última posición?
c. no existe?

## Arreglos bidimensionales

1. **Sistema de calificaciones** Un grupo tiene 10 estudiantes y cada estudiante presenta 6 evaluaciones.
Utilice:

```cpp
double notas[10][6];
```
El programa debe:
1. Leer las notas.
2. Mostrar la matriz de notas.
3. Calcular el promedio de cada estudiante.
4. Calcular el promedio de cada evaluación.
5. Determinar la nota más alta.
6. Determinar la nota más baja.
7. Indicar qué estudiante obtuvo el mayor promedio.

**Entregables**
- Código C++.
- Ejecución por consola.
- Prueba de escritorio.
- Identificación de las variables utilizadas para acumulación.
- Complejidad temporal.

## Tipo Abstracto de Dato — TAD

1. Antes de escribir código, diseñe un TAD Lista. La lista debe permitir:

- insertar()
- eliminar()
- buscar()
- obtener()

**Ejercicio manual**

Completar:

| Elemento | Respuesta |
|---|---|
| ¿Qué datos necesita la lista?	|   |
| ¿Qué operaciones ofrece?	| |
| ¿Qué información debe ser privada?	|   |
| ¿Qué operaciones deben ser públicas?	|  |
| ¿Qué reglas deben cumplirse? |  |

**Decisión de diseño**

Proponga dos posibles implementaciones:
1. Utilizando un arreglo.
2. Utilizando una lista enlazada.
No es necesario implementar todavía la lista enlazada.

## Codificar un TAD sencillo

Implemente en C++ el TAD Cuenta. La clase debe permitir:

```cpp
depositar(valor);
retirar(valor);
consultarSaldo();
```
El saldo debe mantenerse como un dato privado.

**Reglas**
- No se permite depositar valores negativos.
- No se permite retirar valores negativos.
- No se permite retirar más dinero del saldo disponible.
- El saldo no puede modificarse directamente desde main().

**Ejemplo de interacción**

```cpp
=== CUENTA BANCARIA ===

Saldo inicial: 100000

1. Depositar
2. Retirar
3. Consultar saldo
4. Salir

Seleccione: 1
Valor a depositar: 50000

Nuevo saldo: 150000
```
**Entregables**
1. Diagrama sencillo del TAD.
2. Código.
3. Ejecución por consola.
4. Prueba de escritorio de las operaciones.
5. Explicación de:- qué está oculto;
- qué está expuesto;
- cuál es la interfaz;
- cuál es la implementación.

## Miniproyecto módulo 1.

Desarrolle un programa para gestionar estudiantes de un grupo.
El sistema debe almacenar:
- código del estudiante;
- nombre;
- notas de 4 evaluaciones.

Puede utilizar, por ejemplo:

```cpp
int codigos[10];
string nombres[10];
double notas[10][4];
```

El sistema debe permitir:
1. Registrar estudiante
2. Mostrar estudiantes
3. Buscar estudiante
4. Mostrar promedio de un estudiante
5. Mostrar estudiante con mayor promedio
6. Mostrar estadísticas del grupo
7. Salir

**El programa debe implementar**
- Arreglos unidimensionales.
- Arreglo bidimensional.
- Funciones.
- Búsqueda secuencial.
- Recorridos.
- Acumuladores.
- Comparaciones.

**Análisis obligatorio**

Para cada operación principal, el estudiante debe indicar:

| Operación | Estructura utilizada | Algoritmo | Complejidad |
|---|---|---|---|
| Registrar | | | |
| Mostrar | | | | 
| Buscar | | | |
| Promedio | | | | 
| Mejor estudiante | | | | 

**Entregables**

1. Diseño

Explicar
```
Problema
   ↓
Datos
   ↓
Estructura de datos
   ↓
Operaciones
   ↓
Algoritmos
   ↓
Complejidad
   ↓
Implementación
```

2. Código fuente.

3. Prueba por consola.

Realizar mínimo:
- 5 estudiantes.
- 4 evaluaciones por estudiante.
- mínimo 3 búsquedas.

4. Pruebas de escritorio
Realizar prueba de escritorio de:
- registro;
- búsqueda;
- cálculo de promedio;
- obtención del mejor estudiante.
5. Análisis. ¿Qué operación tiene mayor costo en el programa y por qué?