#include <stdio.h>

int main() {
    int hora, min, total_min;

    printf("Digite a hora (0 a 24): ");
    scanf("%i", &hora);
    printf("Digite os minutos: ");
    scanf("%i", &min);

    total_min = (hora*60)+min;
    printf("Se passaram %i minutos.", total_min);

    return 0;
}
