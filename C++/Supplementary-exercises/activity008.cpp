#include <iostream>
#include <string>
using namespace std;

int main()
{
    double n1, n2; int escolha;
    
    cout << "- Calculadora Simples -";
    cout << "\nDigite o valor 1: "; cin >> n1;
    cout << "\nDigite o valor 2: "; cin >> n2;
    cout << "\nEscolha:\n[1] Soma\n[2] Subtração\n[3] multiplicação\n[4] divisão\n"; cin >> escolha;
    
    if((escolha >=1) && (escolha <= 4)){
        cout << "Resultado: ";
        if(escolha == 1){
            cout << n1 + n2;
        }else if(escolha == 2){
            cout << n1 - n2;
        } else if(escolha == 3){
            cout << n1 * n2;
        } else{
            cout << n1 / n2;
        }
    } else{
        cout << "\n Valor de escolha invalido";
    }
    
    
    return 0;
}