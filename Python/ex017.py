dicionario = {}

nome = str(input("digite seu nome: "))
idade = int(input("digite sua idade: "))
cidade = str(input("digite sua cidade: "))

dicionario.update({
    "nome": nome,
    "idade": idade,
    "cidade": cidade
})

print(dicionario)