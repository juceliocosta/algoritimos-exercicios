numx = int(input("informe um numero inteiro: "))
numy = int(input("informe outro numero inteiro: "))

for x in range(1, numx+1):
    for y in range(1, numy+1):
        print(f"{x}.{y}",end="  ")
    print("\n")

"""Exercício 3: Agora, utilizando a estrutura for, construa um programa que recebe 2 números inteiros (X e Y) e apresenta uma matriz X por Y."""