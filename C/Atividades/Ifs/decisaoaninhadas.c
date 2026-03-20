#include <stdio.h>



int main(){

    int idade, dependentes;
    float renda;


    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda: ");
    scanf("%f", &renda);


    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >=18 && idade <65)
    {
       if (renda < 3000)
       {
        if (dependentes > 2)
        {
           printf("Voce atende a todos aos criterios\n");
        }else{
            printf("Voce não atende aos dependentes\n");
        }
        
       }else{
            printf("Sua renda não está na faixa étaria\n");
       }
       
    }else{
        printf("Sua idade não está na faixa étaria\n");
    }
    


/*
  if (idade <= 18 || idade >= 60)
    {
        if (renda < 2000)
        {
           printf("Voce tem direito ao desconto\n");
        }else{
            printf("Você não tem direito ao desconto devido à renda\n");
        }
        
    }else{
        printf("Você não aos critérios devido á idade!\n");
    }


*/  
    
}