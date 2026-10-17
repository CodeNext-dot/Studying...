import os
alunos = []

while(True):
    print("\n\n", "="*5, " MENU ", "="*5)
    print("1 - Cadastrar aluno\n2 - Listar aluno\n3 - Remover aluno\n4 - limpar lista\n5 - Sair")

    escolha = str(input(": "))

    if(escolha == '1'):
        os.system("cls")
        alunos.append({
            "nome" : str(input("Digite o nome: ")),
            "idade" : int(input("Digite a idade: ")),
            "nota" : float(input("Digite a nota: "))
        })

    elif(escolha == '2'):
        os.system("cls")
        for c in alunos:
            print(f"Nome: {c['nome']}, idade {c['idade']}, nota {c['nota'] :.1f}")

    elif(escolha == '3'):
        os.system("cls")
        nome_clear = str(input("Digite o nome do aluno: "))
        for c in alunos:
            if(c['nome'] == nome_clear):
                alunos.remove(c)
        print("\033[33mAluno removido\033[0m")
        
    elif(escolha == '4'):
        os.system("cls")
        print("\033[33mLista limpa\033[0m")
        alunos.clear()
        
    elif(escolha == '5'):
        print("\033[33mSaindo...\033[0m")
        break

    else:
        os.system("cls")
        print("\033[31mOpção invalida\033[0m")