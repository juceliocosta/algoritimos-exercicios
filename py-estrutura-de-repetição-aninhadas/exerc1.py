opcao = 1
while opcao != 0:
    opcao = int(input("""
    escolha a opção da tabuada:
    (1) adição
    (2) subtração
    (3) divisão
    (4) multiplicação
    (0) sair
----------------------------------
    """))
    if 0 <= opcao <=4:
        for tabuada in range(1,11):
            for numero in range(1,11):
                match opcao:
                    case 1: print(f"{tabuada} + {numero} = {tabuada + opcao}")
                match opcao:
                    case 2: print(f"{tabuada} - {numero} = {tabuada - opcao}")
                match opcao:
                    case 3: print(f"{tabuada} / {numero} = {(tabuada / opcao):.2f}")
                match opcao:
                    case 4: print(f"{tabuada} * {numero} = {tabuada * opcao}")
            if opcao == 0: break
            print("-----------")


"""
Exercício 1: Escreva um programa que exiba uma lista de opções (menu): adição, subtração, divisão, multiplicação e sair. Imprima a tabuada da operação escolhida. Repita até que a opção saída seja escolhida.
"""
