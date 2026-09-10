#include <iostream>
using namespace std;

int main() {
    double notas[] = {4.5, 2.9, 4.6, 2, 3.4, 3.6, 1, 1.5};
    int n = 8;

    int reprobados = 0;
    int aceptables = 0;
    int excelentes = 0;

    for(int i = 0; i < n; i++) {
        if(notas[i] < 3) {
            reprobados++;
        } else if(notas[i] >= 3 && notas[i] < 4) {
            aceptables++;
        } else {
            excelentes++;
        }
    }
    cout << "Cantidad de estudiantes reprobados: " << reprobados << endl;
    cout << "Cantidad de estudiantes aceptables: " << aceptables << endl;
    cout << "Cantidad de estudiantes excelentes: " << excelentes << endl;

    return 0;
}
