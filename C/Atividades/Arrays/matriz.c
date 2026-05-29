#include <stdio.h>


int main(){

    int index ;
    
    char * nomeAlunos [3][3]= {

        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 35", "Mat: 60"},
        {"Aluno 2", "Pt: 85", "Mat: 70"}
};


     printf("Digite um número do Alino que queira ver as notas... \n");
     printf("Para Aluno 1, digite 0 \n");
     printf("Para Aluno 2, digite 1 \n");
     printf("Para Aluno 3, digite 2 \n");

    scanf("%d", &index);

    printf("As notas do %s são: %s , %s... \n", nomeAlunos[index][0], nomeAlunos[index][1], nomeAlunos[index][2]);

    return 0;
}