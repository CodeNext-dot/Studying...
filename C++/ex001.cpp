#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    double nota1, nota2, nota3, resultado;
    vector<string>lista = {"reprovado", "aprovado"};
    
    while(true){
        cout <<"\nDigite suas 3 notas a seguir!";
        cout <<"\nnota 1: "; cin>>nota1;
        cout <<"\nnota 2: "; cin>>nota2;
        cout <<"\nnota 3: "; cin>>nota3;
        
        resultado = (nota1 + nota2 + nota3)/3.0;
        bool RP = resultado >=7;
        
        cout <<"Aprovado: "<<RP<<endl;
        cout<<"Sua media final foi "<<resultado<<", voce foi "<<lista[RP];
        
    }
    
    return 0;
}