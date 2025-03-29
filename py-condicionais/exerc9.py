num_1 = float(input("digite um número: "))
num_2 = float(input("digite outro número: "))
operacao = input("digite uma operação: + , - , * ou / : ")
match operacao:
  case "+":
    print(f"{num_1} + {num_2} = {num_1 + num_2}")
  case "-":
    print(f"{num_1} - {num_2} = {num_1 - num_2}")
  case "*":
    print(f"{num_1} * {num_2} = {num_1 * num_2}")
  case "/":
    print(f"{num_1} / {num_2} = {num_1 / num_2}")

