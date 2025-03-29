#include <stdio.h>

int main() {
    float base, altura, area;
    printf("informe a base e altura do triângulo: \n");
    scanf("%f", &base);
    scanf("%f", &altura);

    area = (base * altura)/2;

    printf("Area do triangulo =: %.2f\n", area); 
    return 0;
}