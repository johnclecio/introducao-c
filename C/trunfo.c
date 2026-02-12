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
};

int main(){

    struct Carta cartas[2];

    printf("primeira Carta:\n");

    printf("Estado usando so Uma Letra entre (A a H)\n");
    scanf(" %c", &cartas[0].estado);
    getchar();

     // Substitui o '\n' por '\0' para evitar quebra de linha extra
    printf("Código da Carta: (ex: A01, B03)\n");
    fgets(cartas[0].codigoCarta, sizeof(cartas[0].codigoCarta), stdin);
    cartas[0].codigoCarta[strcspn(cartas[0].codigoCarta, "\n")] = '\0';


    printf("Nome da Cidade:\n");
    fgets(cartas[0].nomeCidade, sizeof(cartas[0].nomeCidade), stdin);
    cartas[0].nomeCidade[strcspn(cartas[0].nomeCidade, "\n")] = '\0';

    printf("População: \n");
    scanf("%d", &cartas[0].populacao);

    printf("Área (em km²):\n");
    scanf("%f", &cartas[0].areaDaCidade);

    printf("PIB:\n");
    scanf("%f", &cartas[0].pib);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &cartas[0].pontosTuristicos);


    //Segunda Carta

    printf("Segunda Carta:\n");

    printf("Estado usando so Uma Letra entre (A a H)\n");
    scanf(" %c", &cartas[1].estado);
    getchar();

     // Substitui o '\n' por '\0' para evitar quebra de linha extra
    printf("Código da Carta: (ex: A01, B03)\n");
    fgets(cartas[1].codigoCarta, sizeof(cartas[1].codigoCarta), stdin);
    cartas[1].codigoCarta[strcspn(cartas[1].codigoCarta, "\n")] = '\0';


    printf("Nome da Cidade:\n");
    fgets(cartas[1].nomeCidade, sizeof(cartas[1].nomeCidade), stdin);
    cartas[1].nomeCidade[strcspn(cartas[1].nomeCidade, "\n")] = '\0';

    printf("População: \n");
    scanf("%d", &cartas[1].populacao);

    printf("Área (em km²):\n");
    scanf("%f", &cartas[1].areaDaCidade);

    printf("PIB:\n");
    scanf("%f", &cartas[1].pib);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &cartas[1].pontosTuristicos);



    printf("-------------------------------");
    printf("Carta 1\n");
    printf("Estado: %c\n", cartas[0].estado);
    printf("Código: %s\n", cartas[0].codigoCarta);
    printf("Nome da Cidade: %s\n", cartas[0].nomeCidade);
    printf("População: %d\n", cartas[0].populacao);
    printf("Área: %.2f km²\n", cartas[0].areaDaCidade);
    printf("PIB: %.2f bilhões de reais\n", cartas[0].pib);
    printf("Número de Pontos Turísticos: %d\n", cartas[0].pontosTuristicos);


    printf(" \n");
    printf("-------------------------------");
    printf("Carta 1\n");
    printf("Estado: %c\n", cartas[1].estado);
    printf("Código: %s\n", cartas[1].codigoCarta);
    printf("Nome da Cidade: %s\n", cartas[1].nomeCidade);
    printf("População: %d\n", cartas[1].populacao);
    printf("Área: %.2f km²\n", cartas[1].areaDaCidade);
    printf("PIB: %.2f bilhões de reais\n", cartas[1].pib);
    printf("Número de Pontos Turísticos: %d\n", cartas[1].pontosTuristicos);

    

    return 0;
    
    
    

   


   
    


    

    



}