#include <iostream>
#include <string>
using namespace std;

int main(){
    double peso, altura, imc;
    
    cout << "Digite seu peso: "; cin >> peso;
    cout << "Digite sua altura: "; cin >> altura;
    
    imc = peso/(altura*altura);
    if((imc < 0) || (imc > 60)){
        cout << "\nValor invalido";
    } else if(imc < 18.5){
        cout << "\nAbaixo do peso";
    } else if(imc < 24.9){
        cout << "\nPeso normal";
    } else if(imc < 29.9){
        cout << "\nSobrepeso";
    } else{
        cout << "\nObesidade";
    }
    
    return 0;
}