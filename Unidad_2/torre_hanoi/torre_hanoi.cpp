/*
funcion hanoi(n, origen, destino, auxiliar):
    si n == 1:
        imprimir "Mover disco de " + origen + " a " + destino
        retornar
    fin si

    hanoi(n-1, origen, auxiliar, destino)
    imprimir "Mover disco de " + origen + " a " + destino
    hanoi(n-1, auxiliar, destino, origen)
fin funcion
*/

#include <iostream>
using namespace std;

void hanoi(int n, char origen, char destino, char auxiliar){
    if(n==1){
        cout << "Mover disco 1 de " << origen << "a" << destino << "\n";
        return;
    }
    hanoi(n-1, origen,auxiliar,destino);
    cout << "Mover disco " << n << "de" << origen << "a" << destino << "\n";
    hanoi(n-1, auxiliar, destino, origen);
}

int main(){
    hanoi(3,'A','C','B');
    return 0;
}