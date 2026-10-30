#include <iostream>
#include <string>
using namespace std;

void att1(string nome){
    cout << "Olá, " << nome << " é o seu nome!";
}

int att2(int num1, int num2){
    return num1 + num2;
}

void att3(int idade){
    if(idade >= 18){
        cout << "É maior de idade";
    } else{
        cout << "É menor de idade";
    }
}

void att4(int numero){
    for(int i = 1; i < 11; i++){
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }
}

int main(){
    string opcao;
    cout << "1 - Saudar\n2 - Função de soma\n3 - Função verifica idade\n4 - função de tabuada\n";
    cout << "escolha uma opção de atividade: "; cin >> opcao;
    
    if(opcao == "1"){
        string nome;
        cout << "digite um nome: "; cin >> nome;
        att1(nome);
    }
    else if(opcao == "2"){
        int num1, num2;
        cout << "digite um numero: "; cin >> num1;
        cout << "digite um numero: "; cin >> num2;
        
        cout << "A soma deles é " << att2(num1, num2);
    }
    else if(opcao == "3"){
        int idade;
        cout << "digite uma idade: "; cin >> idade;
        att3(idade);
    }
    else if(opcao == "4"){
        int numero;
        cout << "digite um numero: "; cin >> numero;
        att4(numero);
    }
    else{
        cout << "nada foi escolhido!";
    }
    
    return 0;
}