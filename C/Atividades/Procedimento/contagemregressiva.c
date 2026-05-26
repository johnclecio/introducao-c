#include <stdio.h>



void contagemRegressiva(int n){

    if(n > 0){
        printf("%d \n", n);

        contagemRegressiva(n - 1);
    }

}



int main(){

    int numero = 5;

    printf("Contagem regresiva.... \n");

    contagemRegressiva(numero);

    return 0;
}