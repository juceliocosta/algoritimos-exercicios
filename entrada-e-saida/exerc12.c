#include <stdio.h>

int main(){
	float potencia = 18;
    float largura, profundidade, iluminacao_total;

    printf("informe a largura da sala: ");
    scanf("%f",&largura);
    printf("informe a profundidade da sala: ");
    scanf("%f",&profundidade);

    iluminacao_total = largura * profundidade * potencia;
    printf("precisa-se de %.0fW", iluminacao_total);
    return 0;
}
