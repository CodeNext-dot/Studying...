lista_dicionario = [{
    "aluno": "joão",
    "idade": 34,
    "nota": 7
}, {
    "aluno": "pedrin",
    "idade": 65,
    "nota": 5
}, {
    "aluno": "henrique",
    "idade": 12,
    "nota": 9
}]

for c in range(0, len(lista_dicionario)):
    print(f"\n{'-'*50}\n")
    print(f"Aluno: {lista_dicionario[c]['aluno']}\nIdade: {lista_dicionario[c]['idade']}\nNota: {lista_dicionario[c]['nota']}")