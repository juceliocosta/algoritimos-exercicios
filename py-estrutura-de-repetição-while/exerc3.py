print("deposito inicial: ")
deposito = float(input())
print("taxa de juros mensal: ")
juros = float(input())
mes = 24
ganho = 0
while mes >=1:
  deposito *= ((juros/100)+1)
  mes -= 1
print(deposito)