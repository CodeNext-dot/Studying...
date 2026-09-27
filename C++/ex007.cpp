#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<float> valores; float valor; int pos;
    
    cout << "Digite o primeiro valor: "; cin >> valor; valores.push_back(valor);
    cout << "Digite o segundo valor: "; cin >> valor; valores.push_back(valor);
    cout << "Digite o terceiro valor: "; cin >> valor; valores.push_back(valor);
    
    cout << "\nTotal de itens na lista: " << valores.size() << endl;
    for(int n : valores){
        cout << "R$" << n << endl;
    }
    
    cout << "\nDigite o quarto valor: "; cin >> valor;
    cout << "Digite a posição [0, 1, 2, 3]: "; cin >> pos;
    valores.insert(valores.begin() + pos, valor);
    
    cout << "\nTotal de itens na lista: " << valores.size() << endl;
    for(int n : valores){
        cout << "R$" << n << endl;
    }
    
    return 0;
}