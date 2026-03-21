#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipocomparacao;

    srand(time(0)); 
    numeroComputador = rand() % 100 + 1;

    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior \n");
    printf("N. Menor \n");
    printf("I. Igual \n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipocomparacao);

    printf("Digite se número (entre 1 a 100): ");
    scanf("%d", &numeroJogador);

    /**/
    switch (tipocomparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolhaer a opção maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolhaer a opção menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break; 
    case 'I':
    case 'i':
        printf("Você escolhaer a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;        
    
    default:
        printf("Opção de jogo inválida\n");
        break;
    }
    printf("o número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);
    if (resultado == 1)
    {
        printf("Parabéns, Voce venceu!\n");
    }else{
        printf("Infelizmente, Voce perdeu!\n");
    }
    



}