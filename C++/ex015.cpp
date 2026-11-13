#include <iostream>
#include <string>
using namespace std;

class ContaBancaria{
    private: 
        string nome;
        double dinheiro;
    
    public:
        ContaBancaria(){
            nome = "joão";
            dinheiro = 0;
        }
    
        void depositar(double valor){
            if(valor >= 0){
                dinheiro += valor;
                cout << "Valor depositado!" << endl;
            } else{
                cout << "Valor invalido!" << endl;
            }
        }
        
        void sacar(double valor){
            if((valor <= dinheiro) && (valor > 0)){
                dinheiro -= valor;
                cout << "Valor sacado!" << endl;
            } else{
                cout << "Valor invalido!" << endl;
            }
        }
        
        double verSaldo(){
            return dinheiro;
        }
};

int main(){
    ContaBancaria funcionario; double valor; int escolha;
    
    while(true){
        cout << "\n== " << "Banco" << " ==\n";
        cout << "escolher: \n[1] - Depositar\n[2] - Sacar\n[3] - Ver Dinheiro\n"; cin >> escolha;
        switch(escolha){
            case 1:
                cout << "Valor que deseja Depositar: "; cin >> valor;
                funcionario.depositar(valor);
            break;
            case 2:
                cout << "Valor que deseja sacar: "; cin >> valor;
                funcionario.sacar(valor);
            break;
            case 3:
                cout << "valor na conta: " << funcionario.verSaldo() << endl;
            break;
            default:
                cout << "Valor invalido!\n";
            break;
        }
    }
    return 0;
}