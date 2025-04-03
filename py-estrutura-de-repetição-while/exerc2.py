print("insira um numero: ")
numero = int(input())
fatorial = numero -1
while fatorial >=1:
  numero *=fatorial
  fatorial -=1
print(numero)