#include <iostream>
#include <vector>
#include <algorithm> // para usar o sort() - usado para organizar de forma crescente -
using namespace std;

int main()
{
    vector<double> notas = {2.0, 4.5, 8.5, 10.0, 8.0, 6.5};
    double v_total, media, aprovados;
    
    cout << "Notas: ";
    for(double i : notas){
        cout << i << ", ";
        
        if(i >= 7){
            aprovados += 1;
        }
        
        v_total += i;
    }
    
    sort(notas.begin(), notas.end());
    media = v_total / notas.size();
    
    cout << "\nMedia geral: " << media << endl;
    cout << "Maior nota: " << notas[notas.size() - 1] << endl;
    cout << "Menor nota: " << notas[0] << endl;
    cout << "Quantidade de aprovados: " << aprovados;
    return 0;
}