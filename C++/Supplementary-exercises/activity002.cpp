#include <iostream>
#include <string>
using namespace std;

int main()
{
    int altura, largura;
    cout << "Calculando a area e o perimetro de um retangulo!";
    cout << "\nDigite a altura: "; cin >> altura;
    cout << "\nDigite a largura: "; cin >> largura;
    
    double area = ((double)largura * altura);
    double perimetro = ((double)2 * (altura + largura));
    
    cout << "\n\nA area e: " << area;
    cout << "\nO perimetro e: " << perimetro;
    
    return 0;
}