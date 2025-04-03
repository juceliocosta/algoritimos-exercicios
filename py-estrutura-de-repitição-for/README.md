# Prática de programação em Python - Comando de repetição FOR

## Objetivo

Esta lista é para que você pratique o uso da estrutura de repetição for dentro da linguagem Python. Além disso, existem exercícios propostos no final para que você possa consolidar o seu conhecimento.

## Estrutura for na linguagem Python

A estrutura de repetição for é uma opção preferida quando o número de iterações é conhecido antecipadamente. Isso ocorre quando você precisa iterar sobre uma sequência específica de elementos ou quando deseja executar um bloco de código um número fixo de vezes.

Veja a sintaxe dessa estrutura na linguagem Python, na célula de código abaixo.

```py
for variavel in sequencia:
    # Bloco de código a ser repetido
```
Vamos ver alguns exemplos de problemas que podem ser resolvidos por meio do uso dessa estrutura.

**Exemplo 1**: Imprimindo de 1 a 5 com for.

```py
for contagem in range(1,6,1): #comando for
   print(contagem)   #impressão do valor da variavel de contagem
```

Observe nesse exemplo a função range(). Ela é utilizada para gerar sequências de números e pode ser configurada de diferentes maneiras, mas a forma mais comum é através do uso da sintaxe range(início, fim, passo), onde:

- *início*: Representa o primeiro número da sequência, ou o valor inicial. Caso não seja especificado, o valor padrão é 0.
- *fim*: Indica o último número da sequência (exclusivo), ou valor final, mas ele está fora da sequência.
- *passo*: Define o valor de incremento. Se não for especificado, o valor padrão é 1.

É importante ter atenção na definição desses valores. Outra possibilidade é utilizar a função range(), com apenas um parâmetro, or exemplo, range(5). Dessa forma, obtemos a sequência de números de 0 a 4 (incluindo o 0 e excluindo o 5), com um incremento padrão de 1. Veja a célula de código abaixo.

```py
for contagem in range(5): #comando for
   print(contagem)   #impressão do valor da variavel de contagem
```

Entender como utilizar a função range() é fundamental para criar iterações precisas em laços for, o que simplifica bastante o trabalho com repetições em Python.

**Exemplo 2**: Gerando uma sequência de números pares.

```py
for i in range(0, 11, 2):
    print(i)
```

Neste exemplo, a chamada range(0, 11, 2) gera a sequência de números pares de 0 a 10, com incrementos de 2. Isso resulta na impressão de todos os números pares dentro do intervalo especificado.

**Exemplo 3**: Iteração sobre uma string.

```py
palavra = "Programaçaõ"
for letra in palavra:
    print(letra)
```

Veja que nesse exemplo, o laço for explora cada letra individualmente da palavra "Programação" e a imprime. Você pode modificar o código acima, mudando a palavra e verificar o comportamento do programa. Sugestão: atribua uma frase à variável palavra e execute o código.

**Exemplo 4**: Vejamos um programa que calcula a média de cinco números digitados pelo usuário.

```py
soma = 0

for x in range(5):
   n = int(input("%d Digite o número: " % x))
   soma = soma + n

print("Média: %5.2f" % (soma/5))
```
## Exercícios

- [] **Exercício 1**: Analise o desempenho de uma turma de 10 alunos em uma disciplina de linguagem de programação. Seu programa deve receber como entrada 10 números entre 0 e 10, representando as médias finais de cada aluno. Para cada média na lista, o programa deve:

- Adicionar a média à soma total das médias (para posterior cálculo da média da turma).
- Verificar se a média é maior ou igual a 5. Se for, incrementar o contador de alunos aprovados.
- Se a média for menor que 5, incrementar o contador de alunos reprovados.

- [] **Exercício 2**: Desenvolva um programa que recebe 7 idades de usuários na entrada. Para cada idade, o programa deve imprimir a categoria correspondente de acordo com a seguinte escala:

|Categoria|Faixa Etária|
|---|---|
|Menor de idade|Menos de 13 anos|
|Adolescente|De 13 a 17 anos|
|Maior de idade|De 18 a 59 anos|
|Idoso|60 anos ou mais|

- [] **Exercício 3**: Faça um programa que receba 10 idades, pesos e alturas, calcule e mostre:

- a média das idades das 10 pessoas
- a quantidade de pessoas com peso superior a 90kg e altura inferior a 1,50m.
- a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90m.

- [] **Exercício 4**: Faça um programa que receba um número, calcule e mostre a tabuada desse número. Exemplo:

```py
Digite um número: 5

5 x 0 = 0
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```