#include <stdio.h>


int main(){
    int idade = 17;
    int resultado;
    
    

    resultado = idade >= 18 ? 1 : 0 ;

    if (resultado == 1)
    {
        printf("Você é maior de Idade \n");
    }else{
        printf("Você é menor de Idade\n");
    }
    

    return 0;
}