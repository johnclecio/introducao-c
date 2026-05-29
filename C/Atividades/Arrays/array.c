#include <stdio.h>


int main(){
    int notas[3] = {10, 8, 9};
    float temperatura[3] = {15.8, 21.5, 31.8};
    char *nome[] = {"John", "Maria", "Debora", "Mãe"};


    for(int i = 0, j = 0; i <= notas[i] && j <= temperatura[j]; i++, j++){
        
        printf("nota %d\n", notas[i]);
        printf("temperatura %.1f\n", temperatura[j]);
  
    }
    for(int i = 0; i <= *nome[i]; i++){
        printf("%s\n", nome[i]);
    }
    


    return 0;
}