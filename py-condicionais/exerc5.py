km_percorrido = float(input("quantidade de km percorridos: "))
dias_alugados = float(input("quantidade de dias que o carro foi alugado: "))
preco = (60 * dias_alugados) + (km_percorrido * 0.15)
print("preço a pagar: ", preco)
