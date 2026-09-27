#include <iostream>
#include <string>
using namespace std;

int main(){
    string user, pin, space(30,'+');
    
    cout << space << "  LOGIN  " << space << endl;
    cout << "Usuario: "; cin >> user;
    cout << "Senha: "; cin >> pin;
    
    if (user == "admin" && pin == "1234"){
        cout << "\n\033[32m Login liberado! \033[0m" << endl;
    } else {
        cout << "\n\033[31m Login bloqueado! \033[0m" << endl;
    }
    
    cout << space << space << endl;
    
    return 0;
}