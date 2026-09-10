#include <iostream>
using namespace std;

int main(){
    int opcion;

    do{
        cout << "\n===MENÚ===" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        if (opcion < 0 || opcion == 0) {
            cout << "Saliendo..." << endl;
            break;
        }

        if (opcion < 0 || opcion > 4) {
            cout << "Opción inválida" << endl;
            continue;
        }

        double a,b;

        cout << "Ingrese el primer número: ";
        cin >> a;
        cout << "Ingrese el segundo número: ";
        cin >> b;

        switch (opcion) {
            case 1:
                cout << "Resultado: " << a + b << endl;
                break;
            case 2:
                cout << "Resultado: " << a - b << endl;
                break;
            case 3:
                cout << "Resultado: " << a * b << endl;
                break;
            case 4:
                if (b != 0) {
                    cout << "Resultado: " << a / b << endl;
                } else {
                    cout << "Error: No se puede dividir por cero." << endl;
                }
                break;
        }
    } while (opcion != 0);

    return 0;
}