#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int opcao, palpite, numeroSecreto, regras;


    printf("Menu Principal\n");
    printf("1. Iniciar o Jogo:\n");    
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolhar uma Opção: ");
    scanf("%d", &opcao);



    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10; 
        printf("Digite um número de 0 a 9: ");   
        scanf("%d", &palpite);
        printf("Número secreto %d\n", numeroSecreto);
        break;
    case 2:
        printf("Menu de Regras\n");
        printf("1. Regra 1 \n");
        printf("2. Regra 2 \n");
        printf("3. Sair \n");
        printf("Escolhar uma Opção: ");
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
            printf("Regra 1 \n");
            break;
        case 2:
            printf("Regra 2 \n");
            break;
        case 3:
            printf("Obrigado Até logo! \n");
            break;    
        default:
            printf("Opção Inválida! \n");;
            break;
        }  
        break;
    case 3:
        printf("Obrigado Até logo!\n");
        break;    
    default:
        printf("Opção Inválida!\n");
        break;
    }
}