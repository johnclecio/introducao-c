#include <stdio.h>

int main() {

    // TABULEIRO 10x10
    int tabuleiro[10][10];
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    int colunas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    
    // TAMANHO DOS NAVIOS
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // COORDENADAS INICIAIS
    int linhaHorizontal = 2;
    int colunaHorizontal = 3;

    int linhaVertical = 5;
    int colunaVertical = 7;

    // INICIALIZA TABULEIRO COM ÁGUA = 0
    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            tabuleiro[i][j] = 0;

        }
    }

    // VALIDA NAVIO HORIZONTAL
    if (colunaHorizontal + 3 <= 10) {

        // POSICIONA NAVIO HORIZONTAL
        for (int i = 0; i < 3; i++) {

           tabuleiro[linhaHorizontal][colunaHorizontal + i] =
               navioHorizontal[i];

        }
   }

    // VALIDA NAVIO VERTICAL
    if (linhaVertical + 3 <= 10) {

        int sobreposicao = 0;

        // VERIFICA SOBREPOSIÇÃO
        for (int i = 0; i < 3; i++) {

           if (tabuleiro[linhaVertical + i][colunaVertical] == 3) {

                sobreposicao = 1;

           }
        }

        // POSICIONA NAVIO VERTICAL
        if (sobreposicao == 0) {

            for (int i = 0; i < 3; i++) {

               tabuleiro[linhaVertical + i][colunaVertical] =
                   navioVertical[i];

           }
       }
   }

    // EXIBE TABULEIRO
    printf("===== TABULEIRO BATALHA NAVAL =====\n\n");
    
    
    for (int i = 0; i < 10; i++)
    {
        printf("%2c " , linha[i]);
        
    }
    printf("\n");

    
    
    for (int i = 0; i < 10; i++) {
        printf("%2d ", colunas[i]);
        
        
        for (int j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
            
            
            
        }
        printf("\n");
    

        
    }

    return 0;
}