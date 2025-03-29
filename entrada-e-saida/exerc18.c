#include <stdio.h>

int main(){

    int largura, comprimento, lajota1, lajota2,lajota3;
    printf("informe a largura: ");
    scanf("%i", &largura);

    printf("informe o comprimento: ");
    scanf("%i", &comprimento);

    lajota1 = (largura * comprimento) + ((largura -1) * (comprimento -1));

    lajota2 = ((largura -1) * 2) + ((comprimento -1) * 2);
    
    lajota3 = 4;

    printf("lajota 1: %i \nlajota 2: %i \nlajota 3: %i\n", lajota1, lajota2, lajota3);
        
    return 0;
}