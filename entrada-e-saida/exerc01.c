#include <stdio.h>

int main(){
    int numeroInteiro;

    printf("digite um numero inteiro: ");
    scanf("%i",&numeroInteiro);

    int dobroDoInteiro = numeroInteiro * 2;

    printf("O dobro de %i é igual a: %i", numeroInteiro, dobroDoInteiro);
    
    return 0;
}