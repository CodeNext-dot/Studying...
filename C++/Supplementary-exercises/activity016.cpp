#include <iostream>
#include <string>
using namespace std;

void home(){
    string space(20, '=');
    system("clear");
    cout << space << " - BANK - " << space;
}

int main(){
    int valor; string pause;
    
    home();
    while(true){
        cout << "\nDigite o valor que deseja sacar: R$"; cin >> valor;
        
        if(valor <= 0){
            home();
            cout << "\033[31m Valor invalido! \033[0m";
            
        } else{
            home();
            cout << "\033[32m Valor valido! R$" << valor << "\033[0m";
            
            cout << "\nNotas de R$100: " << valor / 100;
            valor %= 100;
            cout << "\nNotas de R$50: " << valor / 50;
            valor %= 50;
            cout << "\nNotas de R$20: " << valor / 20;
            valor %= 20;
            cout << "\nNotas de R$10: " << valor / 10;
            valor %= 10;
            cout << "\nValor de sobra: R$" << valor;
            
            cout << "\n\033[33mSair da secção [digite]\033[0m"; cin >> pause;
            
            home();
        }
    }
    return 0;
}