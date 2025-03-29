#include <stdio.h>

int main(){

    int num1, num2, num3, num4;
    printf("informe um numero de 2 digitos: ");
    scanf("%i", &num1);

    printf("informe um numero de 3 digitos: ");
    scanf("%i", &num2);

    printf("informe um numero de 3 digitos: ");
    scanf("%i", &num3);

    printf("informe um numero de 2 digitos: ");
    scanf("%i", &num4);

    printf("CPF: %i.%i.%i-%i\n", num1, num2, num3, num4);
        
    return 0;
}