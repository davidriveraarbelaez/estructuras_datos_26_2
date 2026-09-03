/*
Ejercicio #1.

Desarrollar un programa que reciba n números enteros y almacene los valores en un arreglo. Debe calcular: 
• Promedio. 
• Mayor. 
• Menor. 
• Cantidad de pares. 
• Cantidad de impares. 
• Suma total. 
• Posición del mayor elemento. 

Restricción: No utilizar vector.
*/

#include <iostream>
using namespace std;

int main(){
    const int MAX = 100;
    int numeros[MAX];
    int n;

    cout <<"Ingrese la cantidad de elementos n: ";
    cin >> n;

    // Validación báica del tamaño del arreglo
    if (n <= 0 || n > MAX) {
        cout << "El valor de n debe ser mayor que 0 y menor o igual que " << MAX << endl;
        return 1;
    }

    // Lectura de los datos
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << (i+1) << ": ";
        cin >> numeros[i];
    }

    // Inicialización de variables para calcular estadísticas
    long long suma = 0;
    int pares = 0;
    int impares = 0;

    // Asumimos que n >=1, por eso se puede usar numeros[0] para inicializar mayor y menor
    int mayor = numeros[0];
    int menor = numeros[0];
    int posicionMayor = 0;

    // Recorrido del arreglo para calcular estadísticas
    for(int i = 0; i<n; i++){
        // Suma total
        suma = suma + numeros[i];

        // Contar pares e impares
        if(numeros[i] % 2 == 0){
            pares++;
        } else {
            impares++;
        }

        // Búsquedas: Mayor y menor
        if(numeros[i] > mayor){
            mayor = numeros[i];
            posicionMayor = i;
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    // Calcular el promedio
    double promedio = static_cast<double>(suma) / n;

    // Mostrar resultados
    cout << "\nResultados:\n";
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor: " << mayor << "\n"; 
    cout << "Menor: " << menor << "\n";
    cout << "Posición del mayor: " << posicionMayor << "\n";
    // Ejercicio: Mostrar el índice para humanos
    cout << "Posición del mayor (para humanos): " << (posicionMayor + 1) << "\n";
    cout << "Cantidad de pares: " << pares << "\n";
    cout << "Cantidad de impares: " << impares << "\n"; 
    
    return 0;
}