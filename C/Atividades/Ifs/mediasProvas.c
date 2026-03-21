#include <stdio.h>


int main(){
    int opcao;
    float nota1, nota2, media;  


    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolhar uma opção: ");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        printf("Calcular Média\n");
        printf("Digite Nota 1\n");
        scanf("%f", &nota1);
        printf("Digite Nota 2\n");
        scanf("%f", &nota2);

        

        if ((nota1 >= 0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10))
        {
            media = (nota1 + nota2) / 2;
            printf("a media é %.2f\n", media);
        }else{
            printf("Entrada com valores errados da notas\n");
        }
        
        break;
    case 2:
        printf("Determinar Status\n");
        printf("Entrada com a média: ");
        scanf("%f", &media);
       
        if (media >=7)
        {
            printf("Aprovado!\n")
        }else if (media >=5)
        {
           printf("Recuperação!\n")
        }else{
            printf("Reprovado!\n");
        }
        
        
        break;
    case 3:
        break;        
         printf("Saindo do programa....\n");
    default:
        printf("Opção Inválida\n");
        break;
    }

    return 0;

}