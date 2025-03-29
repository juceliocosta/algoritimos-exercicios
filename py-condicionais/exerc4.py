mercadoria  =  float(input("digite  o  preço  da  mercadoria:  "))
percentual_desconto  =  float(input("digite  o  percentual  do  desconto:  "))
desconto  =  float(mercadoria  *  (percentual_desconto  /  100))
preco  =  mercadoria  -  desconto
print("desconto  do  produto:  ",  desconto)
print("preço  a  pagar:  ",  preco)
