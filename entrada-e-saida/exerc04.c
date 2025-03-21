#include <stdio.h>;

int main(){
    int A, B, SOMA;
    printf("insira 2 valores inteiros: \n");
    scanf("%i", &A);
    scanf("%i", &B);
    SOMA = A + B;
    printf("%i + %i = %i", A, B, SOMA);
    return 0;
}