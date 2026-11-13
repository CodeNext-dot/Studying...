#include <iostream>
#include <string>
using namespace std;

class Livraria{
    private: 
        string titulo;
        string autor;
        int ano;
    
    public:
        Livraria(){
            titulo = "N/D";
            autor = "N/D";
            ano = 0;
        }
    
        void AdicionarLivro(string titulo, string autor, int ano){
            if((ano >= 0) && (ano <= 2026)){
                this->titulo = titulo;
                this->autor = autor;
                this->ano = ano;
            } else{
                cout << "Tente Novamente!\n";
            }
        }
        
        void VerLivro(){
            cout << "titulo: " << titulo << endl;
            cout << "autor: " << autor << endl;
            cout << "ano: " << ano << endl << endl;
        }
};

int main(){
    Livraria cadastro1, cadastro2; string tit, aut; int ano;
    
    cout << "\n== " << "Livraria" << " ==\n";
    for(int i = 1;i <= 2;i++){
        cout << "\n==\n";
        cout << "Digite o titulo: "; cin >> tit;
        cout << "Digite o autor: "; cin >> aut;
        cout << "Digite o ano: "; cin >> ano;
        
        if(i == 1){
            cadastro1.AdicionarLivro(tit, aut, ano);
        }
        else if(i == 2){
            cadastro2.AdicionarLivro(tit, aut, ano);
        }
    }
    
    cout << "\n==\n";
    cadastro1.VerLivro();
    cout << "\n==\n";
    cadastro2.VerLivro();
    
    return 0;
}