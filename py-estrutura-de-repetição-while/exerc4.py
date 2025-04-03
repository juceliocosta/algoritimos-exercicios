num = int(input("Digite um número: "))
primo = True

if num <= 1:
    primo = False
if num == 2:
    primo = True
if num % 2 == 0:
    primo = False
i = 3
while i < num:
    if num % i == 0:
        primo = False
        break
    i += 2

if primo == True:
    print(f"{num} é um número primo.")
else:
    print(f"{num} não é um número primo.")