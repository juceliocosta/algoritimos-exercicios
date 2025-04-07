for i in range(1,8):
    idade = int(input("informe sua idade: "))
    
    if idade < 13: 
        print("Menor de idade")
    elif 13 <= idade <= 17: 
        print("Adolescente")
    elif 18 <= idade <= 59: 
        print("Maior de idade")
    else:
        print("Idoso")

