#include <iostream>
#include <string>
using namespace std;

int main()
{
    double n1, n2, n3, media, frequencia_media; 
    int frequencia; 
    string pago;
    
    cout << "\nPrimeira Nota: "; cin >> n1;
    cout << "\nSegunda Nota: "; cin >> n2;
    cout << "\nTerceira Nota: "; cin >> n3;
    cout << "\nFrequencia(0/200): "; cin >> frequencia;
    cout << "\nPagou tudo?(s/n): "; cin >> pago;
    
    media = (n1+n2+n3)/3;
    frequencia_media = ((double)((double)frequencia/200)*100);
    
    if((media >= 7) && (frequencia >= 75) && (pago == "s")){
        cout << "\nALUNO APROVADO!";
        
    } else{
        if(media < 7){
            cout << "\nREPROVADO POR NOTA!";
        }
        
        if(frequencia < 75){
            cout << "\nREPROVADO POR FALTA!";
        } 
        
        if(pago == "n"){
            cout << "\nREPROVADO POR FINANCEIRO!";
        }
    }  

    return 0;
}