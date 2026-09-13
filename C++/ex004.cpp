#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user, pin, R(40,'=');
    
    cout << R << "\nSISTEMA DE SEGURANÇA N.A.S.A\n\n";
    
    cout << "User: "; cin >> user;
    cout << "Pin: "; cin >> pin;
    
    if (user == "pro001" && pin == "1234"){
        cout << "\nAcesso liberado!" << endl;
    } else {
        cout << "\nUsuario bloqueado! Ativando protocolo morte..." << endl;
    }
    
    cout << R << endl;
    return 0;
}