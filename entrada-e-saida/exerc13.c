#include <stdio.h>
#include <string.h>

int main() {
    int horas, minutos, segundos, resto_dos_segundos;
    printf("informe um valor inteiro: ");
    scanf("%i", &segundos);

    horas = segundos / 3600;
    resto_dos_segundos = segundos % 3600;
    minutos = resto_dos_segundos / 60;
    segundos = resto_dos_segundos % 60;

    printf("%i:%i:%i \n",horas,minutos,segundos);
    return 0;
}