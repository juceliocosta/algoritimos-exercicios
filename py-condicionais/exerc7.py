salario = float(input("informe seu salário: "))
if salario < 2000:
  bonus = (salario / 10)
  print("seu salario atual é de: ", salario + bonus)
else:
  print("seu salario atual é de: ", salario)
