
#include <stdio.h> // biblioteca de entrada e saida de dados;
 
int main() {    

    char nome [20];
    int idade;
    float altura;
    char opcao;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite seu Nome: \n");
    scanf("%s", nome);
    printf("digite sua Altura: \n");
    scanf("%f", &altura);
    printf("Digite sua opção: \n");
    scanf(" %c", &opcao);


    printf("Sua idade é %d\n", idade);
    printf("seu Nome %s\n", nome);
    printf("Sua altura é %f\n", altura);
    printf("Sua opção é %c\n", opcao);
    
    

    return 0;
}


