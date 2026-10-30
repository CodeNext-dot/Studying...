#include <iostream>
#include <string>
using namespace std;

double lerNota(){
    double nota;
    while(true){
        cout << "Digite uma nota: "; cin >> nota;
        
        if((nota >= 0) && (nota <= 10)){
            return nota;
        } else{
            cout << "Nota invalida!" << endl;
        }
    }
}

double calcularMedia(double nota1, double nota2, double nota3){
    return ((nota1 + nota2 + nota3) / 3);
}

string verificarSituacao(double media){
    if(media >= 7){
        return "Aluno aprovado!";
    }
    else if(media >= 4){
        return "Aluno em recuperação!";
    }
    else{
        return "Aluno reprovado!";
    }
}

int main(){
    double n1, n2, n3, m; string r;
    
    n1 = lerNota();
    n2 = lerNota();
    n3 = lerNota();
    
    m = calcularMedia(n1, n2, n3);
    r = verificarSituacao(m);
    
    cout << "Media: " << m << "\nSituação: " << r;

    return 0;
}