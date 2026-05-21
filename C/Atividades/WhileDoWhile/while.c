#include <stdio.h>




int main(){

    int i = 0;

    //vamos imprimir so numeros pares entre 1 á 10;

    while ( i <= 10)
    {
        if(i % 2 == 0){
            
            printf("o número é par! %d\n", i);
            
        }
        i++;
    }
    


    return 0;
}