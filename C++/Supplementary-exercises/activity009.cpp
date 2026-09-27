#include <iostream>
#include <string>
using namespace std;

int main()
{
    int idade;
    cout << "Digite sua idade de 0 a 120: "; cin >> idade;
    
    if((idade >= 0) && (idade <= 120)){
        if((idade >= 0) && (idade <= 12)){
            cout << "\n Uma crianca ainda!";
        } else if((idade >= 13) && (idade <= 17)){
            cout << "\n ja e adolescente!";
        } else if((idade >= 18) && (idade <= 59)){
            cout << "\n A maior fase da vida, ja e adulto.";
        } else{
            cout << "\n Pode jogar baralho em praça por ser idoso...";
        }
    } else{
        cout << "\nIdade invalida.";
    }
    
    
    return 0;
}