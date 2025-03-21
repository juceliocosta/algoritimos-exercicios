#include <stdio.h>
#include <math.h>

int main() {
    float raio, volume;
    printf("informe o raio: \n");
    scanf("%f", &raio);

    volume = (4.0/3.0) * M_PI * pow(raio, 3);
    printf("volume da esfera =: %.2f\n", volume); 
    return 0;
}