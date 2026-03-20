#include <stdio.h>


int main(){
    int opcao;
    float saldo = 1000.00;
    float saque;

    printf("Menu de Opção:\n");
    printf("Digite 1 = Saldo\n");
    printf("Digite 2 = Sacar\n");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        printf("Saldo = %.2f\n", saldo);
        break;
    case 2:
        printf("Qual valor deseja sacar?\n");
        scanf("%f", &saque);
        if (saque <= saldo  )
        {
            printf("Valor de saque %.2f\n", saque);
            printf("Valor se saldo %.2f\n", saldo - saque);
        }else{
            printf("Valor maior que saldo\n");
        }
      break;  
        
    default:
        printf("Operação inválida\n");
        break;
    }

    return 0;
    

}