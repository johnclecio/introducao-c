#include <stdio.h>



void imprimirMensage(){

    printf("Hello, World. \n");
}

float CalcularMedia(float n1, float n2){

    float media = (n1 + n2) / 2.0f;

    return media;
}


int main(){

    float resultado;

    resultado = CalcularMedia(10, 20);

    imprimirMensage();

    printf("%.2f resultado \n", resultado);
    return 0;
}