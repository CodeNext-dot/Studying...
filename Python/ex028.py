senha = "admin123"
tentativa = ""

while(senha != tentativa):
    print("\n\nUsuario S.A.")
    tentativa = str(input("Digite a senha: "))

    if(senha != tentativa):
        print("\033[31mSenha incorreta\033[0m")

print("\033[32mSenha correta\033[0m")