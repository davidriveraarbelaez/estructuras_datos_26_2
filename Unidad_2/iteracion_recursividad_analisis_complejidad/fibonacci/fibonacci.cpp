#include <iostream>
using namespace std;

// Versión recursiva de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Versión 2: recursiva con memoización
int memo[100];
bool calculado[100]= {false};

// Arreglo para almacenar resultados ya calculados
int fibonacci_memo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (calculado[n]) {
        return memo[n];
    }
    memo[n] = fibonacci_memo(n - 1) + fibonacci_memo(n - 2);
    calculado[n] = true;
    return memo[n];
}

// Versión iterativa de Fibonacci
int fibonacci_iterativo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int anterior = 0, actual = 1, siguiente;
    for (int i = 2; i <= n; i++) {
        siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
    }
    return actual;
}