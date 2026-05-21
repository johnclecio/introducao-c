// Movimentando as Peças do Xadrez - Nível Novato
#include <stdio.h>

int main() {
    // Definindo número de casas para cada peça
    int casasTorre = 5;   // Torre: 5 casas para a direita
    int casasBispo = 5;   // Bispo: 5 casas na diagonal cima-direita
    int casasRainha = 8;  // Rainha: 8 casas para a esquerda
    int casasCavalo = 2; // Cavalo: 2 para baixo, 1 para a esquerda
    
    int i, j;

    // 1. TORRE - usando FOR
    // Movimento: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco pra separar

    // 2. BISPO - usando WHILE
    // Movimento: 5 casas na diagonal cima + direita
    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < casasBispo) {
        printf("Cima, Direita\n"); // Combinação das duas direções
        i++;
    }

    printf("\n"); // Linha em branco pra separar

    // 3. RAINHA - usando DO-WHILE
    // Movimento: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);


    printf("\n"); // Linha em branco pra separar

    
     // 4. CAVALO - usando FOR
    // Movimento: 2 casas para a BAIXO
    // usando While 1 casa para esquerda

    int passosEsquerda = 1;
    printf("Movimento da Cavalo:\n");
    for(i = 0; i < casasCavalo; i++) {

            printf("Baixo\n");

            // Quando terminar as 2 casas para baixo
            // executa o movimento para esquerda
            if(i == casasCavalo - 1) {

                int esquerda = 0;

                // Loop WHILE aninhado
                while(esquerda < passosEsquerda) {

                    printf("Esquerda\n");
                    esquerda++;
                }
            }
        }
    

    return 0;
}