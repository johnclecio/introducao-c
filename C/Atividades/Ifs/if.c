#include <stdio.h>



int main(){

    int n1, n2;

    printf("escreva o primeiro número: \n");
    scanf("%d", &n1);

    printf("escreva o segundo número: \n");
    scanf("%d", &n2);

    if (n1 > n2)
    {
       printf("o primeiro número:  %d\n",n1);
    }
    else if(n2 > n1){
        printf("o segundo número: %d\n",n2);
    }
    else {
         printf("os número iguais: \n");
    }
    
}
