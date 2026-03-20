#include <stdio.h>




int main (){

    int idade = 20;
    float altura = 1.75;


    if (idade >= 18 && idade <= 30 && altura > 1.70)
    {
        printf("Voce está na faixa étaria e tem a altura adequada\n");
    }else{
        printf("Você não atende o critérios");
    }
    

}