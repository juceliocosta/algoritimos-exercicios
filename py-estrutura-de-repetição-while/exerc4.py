num = int(input("digite um numero inteiro: "))
i = 1
divisivel = 0
while i <= num:
  if (num % i) == 0: divisivel += 1
  i += 1
print("é primo" if divisivel == 2 else "não é primo")