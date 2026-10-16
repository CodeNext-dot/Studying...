lista = [1, 2, 3, 4, 5, 6]

lista.append(7)
lista.insert(2, 8)
lista.pop(1)
lista.pop(len(lista) - 1)

print(f"sua lista: {lista}")
print(f"quantidade de elementos: {len(lista)}")

lista.clear()

print(f"sua lista sem nada: {lista}")