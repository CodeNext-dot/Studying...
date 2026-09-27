#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nome; int idade;
    
    cout << "\nDigite seu nome: "; cin >> nome;
    cout << "\nDigite sua idade: "; cin >> idade;
    
    cout << "\n\nSeu nome e " << nome << " e sua idade e " << idade;
    cout << "\nProximo ano voce tera: " << idade + 1;
    
    return 0;
}