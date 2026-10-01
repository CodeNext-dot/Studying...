#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> valores; int valor;
    
    cout << "Digite o lado A: "; cin >> valor; valores.push_back(valor);
    cout << "Digite o lado B: "; cin >> valor; valores.push_back(valor);
    cout << "Digite o lado C: "; cin >> valor; valores.push_back(valor);
    
    if(!((valores[0] < (valores[1] + valores[2])) &&
        (valores[1] < (valores[0] + valores[2])) &&
        (valores[2] < (valores[0] + valores[1])))){
        cout << "Os valores não formam um triangulo!";
        
    } else{
        cout << "Os valores formam um ";
        
        if((valores[0] == valores[1]) && (valores[1] == valores[2])){
            cout << "Equilatero!";
            
        } 
        else if((valores[0] == valores[1]) || (valores[1] == valores[2]) || (valores[0] == valores[2])){
            cout << "Isosceles!";
            
        } 
        else{
            cout << "Escaleno!";
            
        }
    }
    return 0;
}