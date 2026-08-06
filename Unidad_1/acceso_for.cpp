#include <iostream>
using namespace std;
string nombres[5];

int main(){

    for (int i = 0; i < 5; i++){
        cout<<"Ingrese el nombre de la persona "<<i+1<<": ";
        cin>>nombres[i];
    }

    cout<<"Los estudiantes matriculados son: "<<endl;
    for (int i = 0; i < 5; i++){
        cout<<nombres[i]<<endl;
    }
    return 0;
}

// edad_1, edad_2, edad_3, edad_4, edad_5