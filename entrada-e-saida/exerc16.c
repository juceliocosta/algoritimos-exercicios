#include <stdio.h>

int main(){

    int num1, num2;
    printf("informe um numero de 5 digitos: ");
    scanf("%i", &num1);

    printf("informe um numero de 2 digitos: ");
    scanf("%i", &num2);

    printf("CEP: %i-%i\n", num1, num2);
        
    return 0;
}