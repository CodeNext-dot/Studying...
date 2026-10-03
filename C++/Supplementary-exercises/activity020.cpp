#include <iostream>
#include <string>
using namespace std;

struct aplicativo {
    double distancia, valor_corrida = 0, valor_Km = 2; 
    int passageiros, horario, taxa = 5;
};

void space(int i){
    cout << "\033[36m";
    if(i == 1){
        string S(20, '=');
        cout << S << " Company Cars " << S << endl;
    } else{
        string S(54, '=');
        cout << S << endl;
    }
    cout << "\033[0m";
}

int main(){
    aplicativo corrida1;
    
    space(1);
    cout << "distância da corrida em quilômetros: "; cin >> corrida1.distancia;
    cout << "quantidade de passageiros: "; cin >> corrida1.passageiros;
    cout << "horário de pico? [0] ou [1]: "; cin >> corrida1.horario;
    space(0);
    
    // validação dos dados
    if((corrida1.passageiros > 0) && (corrida1.distancia > 0) && ((corrida1.horario != 0) && (corrida1.horario != 1))){
        cout << "\033[31mDados invalidos!\033[0m";
        
    } else{
        // calculo base
        corrida1.valor_corrida = corrida1.taxa + (corrida1.distancia * corrida1.valor_Km);
        
        // +10R$ para +3 passageiros
        if(corrida1.passageiros > 3){
            corrida1.valor_corrida += 10;
        }
        
        // 30% a mais por horario de pico
        if(corrida1.horario == 1){
            corrida1.valor_corrida = corrida1.valor_corrida + ((double)corrida1.valor_corrida * (30.00 / 100.00));
        }
        
        // desconto de 10% se for +20Km
        if(corrida1.distancia > 20.00){
            corrida1.valor_corrida = corrida1.valor_corrida - (corrida1.valor_corrida * (10.00 / 100.00));
        }
        
        cout << "\nDistância: " << corrida1.distancia <<" km";
        cout << "\nPassageiros: " << corrida1.passageiros;
        cout << "\nHorário de pico: " << corrida1.horario;
        cout << "\n\n\033[32mValor da corrida: R$" << corrida1.valor_corrida << "\033[0m" << endl;
        space(0);
    }
    
    return 0;
}