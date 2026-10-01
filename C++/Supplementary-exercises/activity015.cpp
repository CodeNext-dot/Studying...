#include <iostream>
#include <string>
using namespace std;

struct viagem{
    int distancia, consumo; float preco, gasto_consumo, gasto_preco;
};

int main()
{
    viagem v1; string space(50,'=');
    
    cout<<space<<endl;
    cout<<"Digite a distância da viagem em km: "; cin >> v1.distancia;
    cout<<"Digite o consumo do carro em km/L: "; cin >> v1.consumo;
    cout<<"Digite o preço da gasolina em R$/L: "; cin >> v1.preco;
    cout<<space<<endl;
    
    v1.gasto_consumo = v1.distancia / v1.consumo;
    v1.gasto_preco = v1.gasto_consumo * v1.preco;
    
    cout<<"\nViagem: " << v1.distancia << " km";
    cout<<"\nConsumo: " << v1.consumo << " km/L";
    cout<<"\nGasolina: R$" << v1.preco << " /L";
    cout<<"\nCombustível necessário: " << v1.gasto_consumo << " L";
    cout<<"\nCusto estimado: R$" << v1.gasto_preco;

    return 0;
}