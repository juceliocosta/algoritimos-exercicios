#include <stdio.h>

int main(){
    int numero1, numero2, var;
    
    printf("informe o primeiro numero: ");
    scanf("%i",&numero1);

    printf("informe segundo numero: ");
    scanf("%i",&numero2);

    var = numero1;
    numero1 = numero2;
    numero2 = var;

    printf("O primeiro numero = %i. segundo numero = %i", numero1, numero2);

    return 0;
}