valor_da_casa = float(input("digite o valor da casa: "))
salario = float(input("digite o seu salario: "))
anos = int(input("quantidade de anos a pagar: "))
valor_mensal = anos * 12
prestacao = valor_da_casa / valor_mensal
print("o valor mensal equivale a: ", valor_mensal)
print("a prestação equivale a: ", prestacao)
if prestacao > (salario * 0.3):
  print("emprestimo não aprovado")
else:
  print("emprestimo aprovado")
