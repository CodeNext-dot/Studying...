lista = [2, 10, 5, 3, 6, 7]
maior = 0

for c in lista:
    if(maior < c):
        maior = c

print(f"lista: {lista}")
print(f"maior numero: {maior}")