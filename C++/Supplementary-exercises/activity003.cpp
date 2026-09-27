#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numero;
    
    cout << "Digite um numero inteiro: "; cin >> numero;
    
    cout << "O numero informado foi " << numero << endl;
    cout << "Seu antecessor e " << numero - 1 << endl;
    cout << "Seu sucessor e " << numero + 1 << endl;
    cout << "O dobro e " << numero * 2 << endl;
    cout << "O triplo e " << numero * 3 << endl;
    
    return 0;
}