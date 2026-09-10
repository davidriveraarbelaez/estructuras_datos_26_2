/*
Clasificador de números

Desarrollar un programa que reciba un número entero e informe:
- Si es positivo, negativo o cero.
- Si es par o impar.
- Si es mayor, menor o igual a 100.
*/

#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    cout << "\nClasificación:\n";

    // Clasificación de signo PAR o IMPAR
    if (numero > 0) {
        cout << "Positivo\n";
    } else if (numero < 0) {
        cout << "Negativo\n";
    } else {
        cout << "Cero\n";
    }

    // Clasificación de paridad
    if (numero % 2 == 0) {
        cout << "Par\n";
    } else {
        cout << "Impar\n";
    }

    // Clasificación respecto a 100
    if (numero > 100) {         
        cout << "Mayor que 100\n";
    } else if (numero < 100) {
        cout << "Menor que 100\n";
    } else {
        cout << "Igual a 100\n";
    }
    return 0;
}

    /*
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
*/