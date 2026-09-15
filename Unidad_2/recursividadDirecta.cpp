#include <iostream>
using namespace std;

int sumaHastaIterativo(int n) {
    int total = 0;

    for(int i=1; i <= n; i++) {
        total += i;
    }
    return total;
}

int sumaHastaRecursivo(int n) {
    if(n == 0) {
        return 0;
    }
        return n + sumaHastaRecursivo(n - 1);
}

int main(){
    int n=5;
    cout << "Iterativo: "<< sumaHastaIterativo(n) << endl;
    cout << "Recursivo: "<< sumaHastaRecursivo(n) << endl;

    return 0;
}
