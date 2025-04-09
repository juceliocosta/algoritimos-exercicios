numx = int(input("informe um numero inteiro: "))
numy = int(input("informe outro numero inteiro: "))

x = 1
while x <=numx:
    y = 1
    while y <= numy:
        print(f"{x}.{y}",end="  ")
        y+=1
    print("\n")
    x+=1


"""Exercício 2: Utilizando a estrutura while, construa um programa que recebe 2 números inteiros (X e Y) e apresenta uma matriz X por Y.
"""