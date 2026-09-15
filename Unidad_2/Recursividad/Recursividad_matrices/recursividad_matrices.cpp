#include <iostream>
using namespace std;

const int EVALUACIONES = 4;

double sumaFila(double matriz[][EVALUACIONES], int fila, int columnas){
if (columnas == 0){
return 0;
}
return matriz[fila][columnas-1] + sumaFila(matriz,fila,columnas-1);
}

int main(){
double notas[5][4]={
{3.0,4.0,5.0,4.0},
{0.0,2.0,3.0,5.0},
{1.0,2.0,3.0,5.0},
{3.5,4.2,4.6,5.0},
{1.0,2.0,2.8,4.6} 
};

double suma = sumaFila(notas,2,EVALUACIONES);

cout<<"Suma de la fila 2:" <<suma<<"\n";
return 0;
}