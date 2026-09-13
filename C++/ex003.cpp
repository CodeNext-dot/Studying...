#include <iostream>
using namespace std;

int main()
{
    int idade;
    
    cout <<"Digite sua idade: ";
    cin >> idade;
    
    if(idade >= 18){
        cout <<"Voce e maior de idade!"<<endl;
        cout <<"ja e responsavel";
    } else {
        cout <<"Voce e menor de idade!"<<endl;
        cout <<"precisa amadurecer";
    }

    return 0;
}