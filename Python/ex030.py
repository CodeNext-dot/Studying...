notas =[]
nota = 0
soma = 0

while(True):
    nota = float(input("Digite uma nota: "))

    if(nota == -1):
        break

    notas.append(nota)
    soma = soma + nota

print(f"\nTotal de notas: {len(notas)}")
print(f"Soma das notas: {soma}")
print(f"Média final: {soma / len(notas) :.2f}")