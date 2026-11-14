class Nota:
    def __init__(self):
        self._nota = 0

    def set_nota(self, nota):
        if((nota >= 0) and (nota <= 10)):
            self._nota = nota
        else:
            print("Valor invalido")
    
    def get_nota(self):
        return self._nota

aluno1 = Nota()

aluno1.set_nota(float(input("digite sua nota: ")))
print(f"nota do aluno: {aluno1.get_nota():.2f}")