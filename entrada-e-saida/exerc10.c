#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, invertido;

    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &numero);

    centena = (numero / 100);
    printf("centena = %i \n",centena*100);
    dezena = ((numero % 100) / 10);
    printf("dezena = %i \n",dezena*10);
    unidade = numero % 10;
    printf("unidade = %i \n",unidade);

    // Inverter número
    invertido = centena + dezena*10 + unidade*100;

    printf("O número invertido é: %d\n", invertido);

    return 0;
}
