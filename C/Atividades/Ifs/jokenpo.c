#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("•••Jogo de Jokenpô•••\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolhar\n");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;


    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - 1\n");
        break;
    case 2:
        printf("Jogador: Papel - 2\n");
        break;    
    case 3:
        printf("Jogador: Tesoura - 3\n");
        break;
    default:
        printf("Operação Invalida\n");
        break;
    }

     switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra - 1\n");
        break;
    case 2:
        printf("Computador: Papel - 2\n");
        break;    
    case 3:
        printf("Computador: Tesoura - 3\n");
        break;
   
    }

    if (escolhaJogador == escolhaComputador)
    {
        printf("### Jogo Empatou ###!\n");
    }else if ((escolhaJogador == 1) && (escolhaComputador == 3)  ||
            (escolhaJogador == 2) && (escolhaComputador == 1) ||
            (escolhaJogador == 3) && (escolhaComputador == 2))    
    {
        printf("### Parabéns Você Ganhou o Jogo! ###\n");
    }else {
        printf("Infelizmente Você Perdeu!\n");
    }
    
   
        
    
    
    
    
    

}