#include <stdio.h>
#include <string.h>

int main() {
    char str[5], temp;

    printf("Informe um número com 4 dígitos: ");
    scanf("%4s", str);

    
    temp = str[0];
    str[0] = str[3];
    str[3] = temp;

    temp = str[1];
    str[1] = str[2];
    str[2] = temp;

    printf("Número invertido: %s\n", str);

    return 0;
}