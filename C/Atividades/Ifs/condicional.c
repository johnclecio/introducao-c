#include <stdio.h>


int main(){


    int nu1 = 10, nu2 = -5;

    printf("Tabela Verdade &&\n");
    if (nu1 > 0 && nu2 > 0)
    {
       printf("O numeros são positivos:\n");
    }else{
        printf("pelo menos um numero e negativo: \n");
    }

    printf("Tabela Verdade ||\n");
    if (nu1 > 0 || nu2 > 0)
    {
        printf("Pelo menos um numeros é positivos:\n");
    }
    else{
        printf("Os dois numero e negativo: \n");
    }

     printf("Tabela Verdade !\n");
    if (!(nu1 > 0))
    {
        printf("A variavel é negativa:\n");
    }
    else{
        printf("A variavel é positiva: \n");
    }
    

    

    return 0;
}