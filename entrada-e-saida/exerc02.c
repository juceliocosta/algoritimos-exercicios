#include <stdio.h>

int main(){
    float numero1, numero2, numero3, numero4;

    printf("informe 4 numeros: \n");
    scanf("%f",&numero1);
    scanf("%f",&numero2);
    scanf("%f",&numero3);
    scanf("%f",&numero4);

    float media = (numero1 + numero2 + numero3 + numero4)/4;

    printf("Media dos numeros = %.3f", media);
    return 0;
}