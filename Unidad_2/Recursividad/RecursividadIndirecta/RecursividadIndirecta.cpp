// Completarzoo

void funcion(int n); //

void funcionA(int n){
    if(n <= 0) return;
    cout << "A: " <<n << "\n";
    funcionB(n-1);
}

void funcionB(int n){
    if(n <= 0) return;
    cout << "B: " <<n << "\n";
    funcionA(n-1);
}