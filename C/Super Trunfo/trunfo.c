#include <stdio.h>
#include <string.h>


struct Carta {
    char estado;
    char codigoCarta[10];
    char nomeCidade[60];
    int populacao;
    float areaDaCidade;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPer;
    
};

int main(){

    struct Carta cartas[2];

    

    for (int i = 0; i < 2; i++)
    {
        printf("Carta:%d\n", i + 1);
        printf("Estado usando so Uma Letra entre (A a H)\n");
        scanf(" %c", &cartas[i].estado);
        getchar();

        printf("Código da Carta: %d (ex: A01, B03)\n", i + 1);
        fgets(cartas[i].codigoCarta, sizeof(cartas[i].codigoCarta), stdin);
        cartas[i].codigoCarta[strcspn(cartas[i].codigoCarta, "\n")] = '\0';


        printf("Nome da Cidade:\n");
        fgets(cartas[i].nomeCidade, sizeof(cartas[i].nomeCidade), stdin);
        cartas[i].nomeCidade[strcspn(cartas[i].nomeCidade, "\n")] = '\0';

        printf("População: \n");
        scanf("%d", &cartas[i].populacao);

        printf("Área (em km²):\n");
        scanf("%f", &cartas[i].areaDaCidade);

        printf("PIB:\n");
        scanf("%f", &cartas[i].pib);

        printf("Número de Pontos Turísticos:\n");
        scanf("%d", &cartas[i].pontosTuristicos);
        getchar();

        cartas[i].densidadePopulacional = (float)cartas[i].populacao / (float)cartas[i].areaDaCidade;
        cartas[i].pibPer = (cartas[i].pib * 1000000000) / cartas[i].populacao;
    }

    for(int j = 0; j < 2; j++){
        printf("-------------------------------");
        printf("Carta %d\n", j + 1);
        printf("Estado: %c\n", cartas[j].estado);
        printf("Código: %s\n", cartas[j].codigoCarta);
        printf("Nome da Cidade: %s\n", cartas[j].nomeCidade);
        printf("População: %d\n", cartas[j].populacao);
        printf("Área: %.2f km²\n", cartas[j].areaDaCidade);
        printf("PIB: %.2f bilhões de reais\n", cartas[j].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[j].pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", cartas[j].densidadePopulacional);
        printf("PIB per Capita: %.2f reais\n", cartas[j].pibPer);

        //PIB per Capita: reais

     



    }

    

    
    return 0;
    
    
    

   


   
    


    

    



}