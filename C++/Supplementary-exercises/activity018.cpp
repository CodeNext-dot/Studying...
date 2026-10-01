#include <iostream>
using namespace std;

int main(){
    int ano;
    
    while(true){
        cout << "\nDigite um ano: "; cin >> ano;
        
        if(((ano % 400) == 0) || (((ano % 100) != 0) && ((ano % 4) == 0))){
            cout << "\033[32m é um ano bissexto! \033[0m";
        } else{
            cout << "\033[31m não é um ano bissexto! \033[0m";
        }
    }
    return 0;
}