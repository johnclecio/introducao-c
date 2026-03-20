#include <stdio.h>


int main(){

    int nu1;

    printf("Digite um número: ");
    scanf("%d", &nu1);
   

    if (nu1 > 0)
    {
       if (nu1 % 2 == 0)
       {
         printf("O número é Par\n");
       }else{
        printf("O número é Impar\n");
       }
       
    }else if(nu1 == 0)
    {
        printf("O número é zero\n");
    }else{
        printf("O número é negativo\n");
    }
    
}