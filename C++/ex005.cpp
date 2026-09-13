#include <iostream>
#include <string>
using namespace std;

int main()
{
    float n1, n2, n3, media; 
    int faltas, p_frequencia, t_aulas;
    
    n1 = 8;
    n2 = 10;
    n3 = 9;
    
    faltas = 10;
    t_aulas = 200;
    
    media = (n1 + n2 + n3)/3;
    p_frequencia = (faltas*100)/t_aulas;
    
    cout << "\nnota 1: " << n1 << "\nnota 2: " << n2 << "\nnota 3: " << n3 << endl;
    cout << "\nSua media é: " << media << endl;
    cout << "Sua porcetagem de faltas é: " << p_frequencia << "%" << endl;
    
    if(media >= 7 && p_frequencia < 25){
        
        if(media >= 9 && p_frequencia < 10){
            cout << "\nAluno aprovado com louvor!" << endl;
        } else {
            cout << "\nAluno aprovado" << endl;
        }
        
    } else if(media >= 5 && p_frequencia < 25){
        cout << "\nAluno em recuperação" << endl;
        
    } else{
        cout << "\nAluno reprovado!" << endl;
    }
    
    return 0;
}