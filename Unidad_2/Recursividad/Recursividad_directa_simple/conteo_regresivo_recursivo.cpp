#include <iostream>
using namespace std;

void contar(int n){
    if(n == 0 ){
        return; // Caso base
    }
    // contar(n - 1); // Caso recursivo Orden ascendente
    cout << n << " ";
    contar(n - 1); // Caso recursivo Orden descendente
}


int main(){
    contar(5); // Invocamos la función
    return 0;
}