// Movimentando as Peças do Xadrez - Nível Novato
#include <stdio.h>



// Procedimento 
// 1. TORRE - usando IF e Recursividade
// Movimento: 5 casas para a direita
void MovimentoTorre(int casasTorre){
    if(casasTorre > 0){
        MovimentoTorre(casasTorre - 1);
        printf("Direita\n");
    }
}


// 2. BISPO - usando WHILE
// Movimento: 5 casas na diagonal cima + direita
void MovimentoBispo(int casasBispo){

    if(casasBispo > 0){

        int vertical, horizontal;

        // Loop externo
        for(vertical = 0; vertical < 1; vertical++){

            // Loop interno
            for(horizontal = 0; horizontal < 1; horizontal++){

                printf("Cima Direita\n");
            }
        }

        MovimentoBispo(casasBispo - 1);
    }
}

// 3. RAINHA - usando DO-WHILE
// Movimento: 8 casas para a esquerda
void MovimentoRainha(int casasRainha){
    if(casasRainha > 0){
        printf("Esquerda\n");
        MovimentoRainha(casasRainha - 1);
    }
}


// 4. CAVALO - usando FOR
// Movimento: 2 casas para a BAIXO
// usando While 1 casa para esquerda
void MovimentoCavalo(){

    int cima, direita;

    // Loop externo
    for(cima = 1; cima <= 2; cima++){

        printf("Cima\n");

        // Quando terminar as 2 casas
        if(cima == 2){

            // Loop interno
            for(direita = 1; direita <= 1; direita++){

                printf("Direita\n");

                break;
            }
        }
    }
}

void MovimentoPiao(int casasPiao){
    if(casasPiao > 0){
        MovimentoPiao(casasPiao - 1);
        printf("Cima\n");
    }

}

int main() {
    // Definindo número de casas para cada peça
    int casasTorre = 5;   // Torre: 5 casas para a direita
    int casasBispo = 5;   // Bispo: 5 casas na diagonal cima-direita
    int casasRainha = 8;  // Rainha: 8 casas para a esquerda
    int casasCavalo = 2; // Cavalo: 2 para baixo, 1 para a esquerda
    int casasPiao = 2;   // Pião : 2 para cima
    
    

   
    printf("Movimento da Torre:\n");
    MovimentoTorre(casasTorre);

    printf("\n"); // Linha em branco pra separar

    
    printf("Movimento do Bispo:\n");
    MovimentoBispo(casasBispo);

    printf("\n"); // Linha em branco pra separar

    
    printf("Movimento da Rainha:\n");
    MovimentoRainha(casasRainha);

    printf("\n"); // Linha em branco pra separar

    printf("Movimento do Cavalo:\n");
    MovimentoCavalo();

    printf("\n"); // Linha em branco pra separar

    printf("Movimento do Pião:\n");
    MovimentoPiao(casasPiao);


    

    

    return 0;
}