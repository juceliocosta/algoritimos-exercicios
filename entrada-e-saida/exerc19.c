#include <stdio.h>>

int main(){

    int comprimento_estrada, distancia_pedagio, custo_quilometro, valor_por_pedagio;

    printf("informe o comprimento da estrada: ");
    scanf("%i", &comprimento_estrada);//L

    printf("informe a distancia entre pedagios: ");
    scanf("%i", &distancia_pedagio);//D

    printf("informe o custo por quilometros percorridos: ");
    scanf("%i", &custo_quilometro);//K

    printf("informe o valor de cada pedagio: ");
    scanf("%i", &valor_por_pedagio);//P

    int custo_combustivel = comprimento_estrada * custo_quilometro;

    int qnt_pedagios = comprimento_estrada / distancia_pedagio;

    int custo_total = custo_combustivel + (qnt_pedagios * valor_por_pedagio);

    printf("custo total: %i\n", custo_total);

    return 0;
}