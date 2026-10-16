salario = float(input("Digite seu salario: "))

if(salario <= 2000):
    salario = salario + (salario * (15/100))
elif(salario <= 5000):
    salario = salario + (salario * (10/100))
else:
    salario = salario + (salario * (5/100))

print(f"seu salario ficou R${salario}")