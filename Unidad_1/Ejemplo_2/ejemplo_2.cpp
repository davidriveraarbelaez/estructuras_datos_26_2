#include <iostream>
using namespace std;

bool buscar(int datos[], int n, int valor, int &posicion, int &comparaciones){
    comparaciones=0;
    posicion = -1;

    for(int i = 0; i < n; i++){
        comparaciones++;

        if(datos[i]== valor){
            posicion= i;
            return true;
        }
    }
    return false;
}

int main(){
    int datos[] = {15, 8, 23, 42, 4, 16, 9, 31, 27, 11};
    int n = 10;

    int valor;
    cout << "Ingrese el valor a buscar: ";
    cin >> valor;

    int posicion;
    int comparaciones;

    bool encontrado = buscar(datos, n, valor, posicion, comparaciones);

    cout << "\nResultados:\n";
    cout << "\nValor buscado: " << valor << "\n";

    if(encontrado){
        cout << "El valor existe,\n";
        cout << "Posición (índice): " << posicion << "\n";
        cout << "Posición (índice para humanos): " << (posicion+1) << "\n";
    }else{
        cout << "El valor no existe.\n";
    }
    
    cout << "Comparaciones realizadas: " << comparaciones << "\n";

    return 0;
}