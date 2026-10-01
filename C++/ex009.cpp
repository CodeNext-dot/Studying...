#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string frase; int numeros = 0, vogais = 0, caracteres = 0, caracteres_especial = 0, espacos = 0;
    string vogal = "aeiouAEIOU";
    cout << "Escreva uma frase: "; getline(cin, frase);
    for(char letra : frase){
        caracteres += 1;
        if(isdigit(letra)){
            numeros += 1;
        } else if(vogal.find(letra) != string::npos){
            vogais += 1;
        } else if(isspace(letra)){
            espacos += 1;
        } else if(!isalpha(letra)){
            caracteres_especial += 1;
        }
    }
    
    cout << "\nTotal de caracteres: " << caracteres;
    cout << "\nTotal de vogais: " << vogais;
    cout << "\nTotal de espaços: " << espacos;
    cout << "\nTotal de numeros: " << numeros;
    cout << "\nTotal de especiais: " << caracteres_especial;
    
    return 0;
}