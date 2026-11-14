class Pessoa:
    def __init__(self):
        self._idade = 0
        self.nome = "N/D"

    def set_idade(self, idade):
        if((idade >= 0) and (idade <= 120)):
            self._idade = idade
        else:
            print("Idade invalida!")

    def get_idade(self):
        return self._idade

usuario = Pessoa()

usuario.nome = str(input("Digite seu nome: "))
usuario.set_idade(int(input("Digite sua idade: ")))

print(f"\nLOGIN: {usuario.nome}\nIDADE: {usuario.get_idade()}")