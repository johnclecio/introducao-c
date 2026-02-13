#include <stdio.h>
/*
Hora de codar
Agora você aplicará os conceitos estudados no nível básico, 
criando um programa em C que gerencia o cadastro de alunos em uma turma.
Utilizaremos variáveis para armazenar informações como nome, idade e matrícula dos alunos.
Operadores de atribuição serão usados para atualizar os dados conforme necessário.

 

As funções printf e scanf serão usadas para interagir com o usuário,
permitindo a entrada dos dados dos alunos e a exibição das informações cadastradas.
Essa prática reforçará seu entendimento sobre variáveis, tipos de dados e funções de entrada e saída, 
preparando-o para resolver problemas mais complexos.

 

Confira no vídeo como criar um programa em C para cadastrar os dados dos alunos. Aprenda sobre variáveis,
operadores matemáticos e funções de entrada e saída. Siga o passo a passo para usar os comandos printf e scanf.


*/
int main(){
      char nomeAluno[40];
      int idade, matricula;
      float altura;
      float notas [3];
      float soma = 0;
      float media;

       printf("digite Nome: \n");
       fgets(nomeAluno, 40, stdin);
    

       printf("Digite sua Idade: \n");
       scanf("%d", &idade);

       printf("digite sua Altura: \n");
       scanf("%f", &altura);

       printf("Digite sua Matricula: \n");
       scanf("%d", &matricula);



    for (int i = 0; i < 3; i++)
    {
        printf("digite sua nota %d: \n", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
        
        
    }

        media = soma / 3;

    
  
      printf("Seu Nome %s", nomeAluno);
      printf("Sua idade: %d - Sua Altura %.2f\n", idade, altura);
      printf("Sua Matricula %d\n", matricula);
      printf("Sua média %.2f", media);

    return 0;
    


}
