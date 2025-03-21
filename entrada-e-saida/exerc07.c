#include <stdio.h>

int main() {
    float n1, n2, n3;
    printf("informe suas notas: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);

    //((n1*4)+(n2*5)+(n3*6))/15 = 70
    //(n1*4)+(n2*5)+(n3*6) = 70*15
    //(n2*5)+(n3*6) = 70*15 - (n1*4)
    // n3*6 = 70*15 - (n1*4)-(n2*5)
    n3 = (70*15 - (n1*4)-(n2*5))/6;

    printf("Precisa de pelo menos =: %.2f\n", n3); 
    return 0;
}