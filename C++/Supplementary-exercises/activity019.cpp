#include <iostream>
using namespace std;

int main(){
    int horas, cliente, preco_final;
    
    cout << "Digite o total de horas usadas: "; cin >> horas;
    cout << "Voce é um cliente?[0] ou [1]: "; cin >> cliente;
    
    if(((cliente != 0) && (cliente != 1)) || (horas < 0)){
        cout << "\033[31m valores invalidos! \033[0m";
    } else{
        if(horas == 1){
            preco_final = 10;
        } else if(horas <= 3){
            preco_final = 20;
        } else if(horas <= 5){
            preco_final = 30;
        } else if(horas <= 8){
            preco_final = 40;
        } else{
            preco_final = 50;
        }
        
        if((cliente == 1) && (preco_final != 50)){
            preco_final = preco_final - ((double)preco_final * (20.00 / 100.00));
        }
        
        cout << "O valor final ficou: R$" << preco_final;
    }
    
    return 0;
}