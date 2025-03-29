#include <stdio.h>

int main(){
    float taxaDistancia, distanciaDesejada, tempo, velX = 60, velY = 90;

    printf("informe a distancia em km: ");
    scanf("%f", &distanciaDesejada);
    
    taxaDistancia = (velY - velX)/60;
    tempo = distanciaDesejada / taxaDistancia;
    
    printf("distancia do carro Y em relação ao carro x é de %.0f minutos\n", tempo);
    return 0;
}