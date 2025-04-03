notas_total = 0
aprovados = 0
reprovados = 0
for i in range(1,10):
    media = int(input(f"insira a média final do aluno {i}"))
    
    if media >= 5: aprovados+=1
    else: reprovados+=1

    notas_total += media
    