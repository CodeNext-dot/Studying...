#include <iostream>
#include <string>
using namespace std;

int main(){
    double valor_produto, desconto, valor_final; string space(60, '*');
    
    cout << endl << space;
    cout << "\nDigite o valor do produto: "; cin >> valor_produto;
    
    if(valor_produto <= 100){
        cout << "\nProduto sem promoção, aproveite e olhe os outros!";
        cout << endl << space;

    } else if(valor_produto <= 500){
        desconto = valor_produto*(10.00/100.00);
        valor_final = valor_produto - desconto;
        
        cout << "\nSeu produto de R$" << valor_produto << " ficou R$" << valor_final << " !!!";
        cout << "\nCom um desconto de R$" << desconto << " !!!";
        cout << endl << space;
        
    } else{
        desconto = valor_produto*(20.00/100.00);
        valor_final = valor_produto - desconto;
        
        cout << "\nSeu produto de R$" << valor_produto << " ficou R$" << valor_final << " !!!";
        cout << "\nCom um desconto de R$" << desconto << " !!!";
        cout << endl << space;
    }

    return 0;
}