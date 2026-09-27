#include <iostream>
#include <string>
using namespace std;

int main()
{
    double n1, n2, n3, media;
    
    cout << "\nDigite a nota 1: "; cin >> n1;
    cout << "\nDigite a nota 2: "; cin >> n2;
    cout << "\nDigite a nota 3: "; cin >> n3;
    
    media = (n1 + n2 + n3)/3;
    
    if(media >= 7){
        cout << "\nAluno aprovado, media " << media;
    } else{
        cout << "\nAluno reprovado, media " << media;
    }
    
    return 0;
}