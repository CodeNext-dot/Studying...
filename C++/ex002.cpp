#include <iostream>
using namespace std;

int main()
{
    double preco{400};
    double promo{20};
    
    int desconto = preco * (promo/100);
    int valor_final = preco - desconto;
    
    cout<<"O preço do produto é R$"<<preco<<" mas com seu desconto de "<<promo<<"% fica R$"<<valor_final<<"!!!"<<endl;
    cout<<"Economizou R$"<<desconto<<"!!!";
    return 0;
}