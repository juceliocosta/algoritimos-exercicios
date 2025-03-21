#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    printf("informe suas notas: \n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media = ((nota1*4)+(nota2*5)+(nota3*6))/15;
    printf("Media ponderada =: %.2f\n", media); 
    return 0;
}