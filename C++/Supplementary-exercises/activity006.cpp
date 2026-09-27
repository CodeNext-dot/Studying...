#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1, n2;
    
    cout << "\nDigite um inteiro: "; cin >> n1;
    cout << "\nDigite outro inteiro: "; cin >> n2;
    
    if(n1 == n2){
        cout << "\nOs numeros são iguais!";
    } else if(n1 > n2){
        cout << endl << n1 << " e maior que " << n2;
    } else{
        cout << endl << n2 << " e maior que " << n1;
    }
    
    return 0;
}