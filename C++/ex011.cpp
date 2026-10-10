#include <iostream>
#include <string>
#include <vector>
#include <algorithm> /* para usar o sort() */
#include <cstdlib> /* para usar o system(); */
using namespace std;

struct aluno_dados{
    string nome;
    int idade;
    string curso;
    double nota;
};

void space1(){
    system("clear"); /* no windows usar system("cls"); no linux usar system("clear"); */
    string e(40, '=');
    cout << e << endl;
}
void space2(){
    string e(40, '=');
    cout << endl << e << endl;
}

void atividade1(){
    space1();
    int num;
    
    cout << " Escreva um numero inteiro positivo: "; cin >> num;
    for(num; num != 0; num--){
        cout << num << endl;
    }
}

void atividade2(){
    space1();
    double nota;
    
    while(true){
        cout << "Digite uma nota ou [-2]SAIR: "; cin >> nota;
        
        if(nota == -2){
            break;
        }
        if((nota < 0) || (nota > 10)){
            cout << "\033[36mValor invalido, digite novamente. . .\033[0m" << endl;
            continue;
        }
        
        if(nota >= 7){
            cout << "\033[32mAprovado\033[0m" << endl;
            
        } else if(nota >= 4){
            cout << "\033[33mRecuperação\033[0m" << endl;
            
        } else{
            cout << "\033[31mReprovado\033[0m" << endl;
            
        }
    }
}

void atividade3(){
    space1();
    vector<double> notas;
    double nota, soma, media, aprovados;
    
    while(true){
        cout << "Digite uma nota ou [-2]SAIR: "; cin >> nota; 
        if(nota < 0){
            break;
        }
        if(nota <= 10){
            if(nota >= 7){
                aprovados += 1;
            }
            soma = soma + nota;
            notas.push_back(nota);
        }
    }
    sort(notas.begin(), notas.end());
    media = soma / notas.size();
    
    cout << "\nQuantidade de notas: " << notas.size();
    cout << "\nSoma: " << soma;
    cout << "\nMédia: " << media;
    cout << "\nMaior nota: " << notas[notas.size() - 1];
    cout << "\nMenor nota: " << notas[0];
    cout << "\nAprovados: " << aprovados;
}

void atividade4(){
    space1();
    vector<aluno_dados> alunos;
    aluno_dados aluno, maiorNota = {"ninguem", 0, "N/D", 0}; int opcaoCadastro; double somaNotas, mediaNotas;
    
    while(true){
        space2();
        cout << "\n1 - Cadastrar aluno\n2 - Listar alunos\n3 - Mostrar média da turma\n4 - Motrar aprovados\n5 - Motrar melhor aluno\n0 - Sair\n";
        cin >> opcaoCadastro;
        
        switch(opcaoCadastro){
            case 1:
                space1();
                cout << "Nome: "; cin >> aluno.nome;
                cout << "Idade: "; cin >> aluno.idade;
                cout << "Curso: "; cin >> aluno.curso;
                cout << "Nota: "; cin >> aluno.nota;
                alunos.push_back(aluno);
                cout << "\033[32mAluno cadastrado!\033[0m" << endl;
            break;
            case 2:
                space1();
                for(aluno_dados i : alunos){
                    cout << " Nome: " << i.nome << " -";
                    cout << " Idade: " << i.idade << " -";
                    cout << " Curso: " << i.curso << " -";
                    cout << " Nota: " << i.nota;
                    cout << endl;
                }
            break;
            case 3:
                space1();
                somaNotas = 0;
                
                for(aluno_dados i : alunos){
                    somaNotas = somaNotas + i.nota;
                }
                mediaNotas = somaNotas / alunos.size();
                
                cout << " media dos alunos: " << mediaNotas;
                cout << endl;
            break;
            case 4:
                space1();
                for(aluno_dados i : alunos){
                    if(i.nota >= 7){
                        cout << " Nome: " << i.nome << " -";
                        cout << " Idade: " << i.idade << " -";
                        cout << " Curso: " << i.curso << " -";
                        cout << " Nota: " << i.nota;
                        cout << endl;
                    }
                }
            break;
            case 5:
                space1();
                for(aluno_dados i : alunos){
                    if(i.nota > maiorNota.nota){
                        maiorNota.nome = i.nome;
                        maiorNota.idade = i.idade;
                        maiorNota.curso = i.curso;
                        maiorNota.nota = i.nota;
                    }
                }
                cout << "Melhor aluno:";
                cout << " Nome: " << maiorNota.nome << " -";
                cout << " Idade: " << maiorNota.idade << " -";
                cout << " Curso: " << maiorNota.curso << " -";
                cout << " Nota: " << maiorNota.nota;
                cout << endl;
            break;
            default:
                cout << "\033[36mSaindo. . .\033[0m";
                return;
            break;
        }
    }
}

int main(){
    int opcaoMenu;
    
    while(true){
        space2();
        cout << "\nEscolha uma opção de atividade:\n [1]Contagem regressiva\n [2]Validador de nota\n [3]Soma e média até sentinela\n [4]Sistema de cadastro com menu\n [0]Sair\n";
        cin >> opcaoMenu;
        
        switch(opcaoMenu){
            case 1:
                atividade1();
            break;
            case 2:
                atividade2();
            break;
            case 3:
                atividade3();
            break;
            case 4:
                atividade4();
            break;
            default:
                cout << "\033[36mSaindo. . .\033[0m";
                return 0;
            break;
        }
    }
}