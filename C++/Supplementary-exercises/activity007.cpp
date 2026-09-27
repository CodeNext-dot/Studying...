#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1;
    
    cout << "Digite um numero inteiro: "; cin >> n1;
    
    if(n1 == 0){
        cout << "\nSeu numero e zero!";
    } else if((n1%2) == 0){
        cout << "\nSeu numero e par!";
    } else{
        cout << "\nSeu numero e impa!";
    }
    
    return 0;
}