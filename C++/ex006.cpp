#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> notas;
    double nota; string space(40, '=');
    
    cout << space << endl;
    cout << "Digite a nota 1: "; cin >> nota; notas.push_back(nota);
    cout << "Digite a nota 2: "; cin >> nota; notas.push_back(nota);
    cout << "Digite a nota 3: "; cin >> nota; notas.push_back(nota);
    cout << "Digite a nota 4: "; cin >> nota; notas.push_back(nota);
    cout << "Digite a nota 5: "; cin >> nota; notas.push_back(nota);
    cout << space << endl;
    
    cout << "Numero de itens na lista: " << notas.size() << endl;
    cout << "Primeira numero da lista: " << notas[0] << endl;
    cout << "Ultimo numero da lista: " << notas[notas.size() - 1] << endl;
    
    if(notas[0] > notas[notas.size() - 1]){
        cout << "O primeiro numero e maior que o ultimo" << endl; 
    } else{
        cout << "O ultimo numero e maior que o primeiro" << endl;
    }
    
    if((notas[0] > 0) && (notas[notas.size() - 1] > 0)){
        cout << "O ultimo e o primeiro numero sao positivos" << endl;
    } else{
        cout << "O ultimo ou o primeiro numero e negativo" << endl;
    }
    cout << space << endl;
    
    return 0;
}