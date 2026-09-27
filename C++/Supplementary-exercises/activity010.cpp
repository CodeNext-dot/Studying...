#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1,n2,n3;;
    
    cout << "\nDigite o numero 1: "; cin >> n1;
    cout << "\nDigite o numero 2: "; cin >> n2;
    cout << "\nDigite o numero 3: "; cin >> n3;
    
    if((n1 > n2) && (n1 > n3)){
        cout << "\n o maior numero e " << n1;
    } else if((n2 > n3) && (n2 > n1)){
        cout << "\n o maior numero e " << n2;
    } else{
        cout << "\n o maior numero e " << n3;
    }
    
    if((n1 < n2) && (n1 < n3)){
        cout << "\n o menor numero e " << n1;
    } else if((n2 < n3) && (n2 < n1)){
        cout << "\n o menor numero e " << n2;
    } else{
        cout << "\n o menor numero e " << n3;
    }
    
    if(n3 == n2){
        cout << "\n esses sao iguais: " << n3 << " e " << n2;
    } else if (n1 == n2){
        cout << "\n esses sao iguais: " << n1 << " e " << n2;
    } else if(n1 == n3){
        cout << "\n esses sao iguais: " << n1 << " e " << n3;
    }
    
    return 0;
}