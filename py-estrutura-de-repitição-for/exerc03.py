idades_total = 0
sedentario = 0
adulto_alto = 0
for i in range(1,11):
    print(f"--------------({i})--------------")
    idade = int(input("informe sua idade: "))
    peso = float(input("informe seu peso em kg: "))
    altura = float(input("informe sua altura em metros: "))

    idades_total += idade
    
    if peso > 90.0 and altura < 1.5: 
        sedentario+=1

    if idade >=10 and idade<= 30 and altura > 1.9:
        adulto_alto +=1

print(f"""
-------------------------------
Media das idades: {idades_total/10}

quantidade de pessoas com peso superior a 90kg e altura inferior a 1,50m: {sedentario}

porcentagem de {adulto_alto} pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90m: {(adulto_alto/10)*100}%
""")
