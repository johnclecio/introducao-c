#include <stdio.h>


int main(){

    int n1, n2, n3;
    float media;

    printf("*** Programa. de Cálculo de Média \n");

    printf("Digite a sua primeira nota: \n");
    scanf("%d", &n1);
    printf("Digite a sua segunda nota: \n");
    scanf("%d", &n2);
    printf("Digite a sua terceira nota: \n");
    scanf("%d", &n3);

    media = (float)(n1 + n2 + n3) / 3;

    printf("Sua média é: %.1f\n", media);
    return 0;

}
