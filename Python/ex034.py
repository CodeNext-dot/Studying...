import os

class Produto:
    def __init__(self):
        self.nome = "N/D"
        self._quantidade = 0

    def set_quantidade(self, quantidade):
        if(quantidade >= 0):
            self._quantidade += quantidade
        else:
            print("Valor negativo, invalido.")

    def remove_quantidade(self, quantidade):
        if((quantidade <= self._quantidade) and (quantidade >= 0)):
            self._quantidade -= quantidade
        else:
            print("Valor negativo ou maior que estoque, invalido.")

    def get_quantidade(self):
        return self._quantidade

arroz = Produto()

arroz.nome = "Pacote[1KG] de Arroz"
arroz.set_quantidade(50)

while True:
    print(f"{'='*20} PRODUTO: {arroz.nome} {'='*20}")
    opcao = int(input(
            "MENU\n"
            "  [1] ADICIONAR ESTOQUE\n"
            "  [2] REMOVER ESTOQUE\n"
            "  [3] VER ESTOQUE\n"
            "  [4] SAIR\n"
            ))

    match opcao:
        case 1:
            os.system('cls')
            arroz.set_quantidade(int(input("\nDigite o quanto deseja adicionar: ")))
        case 2:
            os.system('cls')
            arroz.remove_quantidade(int(input("\nDigite o quanto deseja remover: ")))
        case 3:
            os.system('cls')
            print(f"\nEstoque disponivel {arroz.nome}: {arroz.get_quantidade()}")
        case 4:
            break
        case _:
            pass