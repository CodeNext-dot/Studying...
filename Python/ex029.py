soma = 0
numero = 0

while(True):
    numero = int(input("Digite um numero: "))
    if(numero == 0):
        break

    soma = soma + numero

print(f"A soma final ficou: {soma}")