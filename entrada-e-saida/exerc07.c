#include <stdio.h>
#include <math.h>

int main(){
    float raio, circunferencia;
    printf("informe o raio: ");
    scanf("%f",&raio);
    circunferencia = 2 * M_PI * raio;
    printf("Comprineto da circuferencia: %.2f", circunferencia);
    return 0;
}