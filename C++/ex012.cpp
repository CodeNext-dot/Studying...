#include <iostream>
using namespace std;

double LerNota(){
    double nota;
    
    cout << "Digite uma nota: "; cin >> nota;
    
    return nota;
}

int main(){
    double nota = LerNota();

    cout << endl << "A nota digitada foi: " << nota;

    return 0;
}