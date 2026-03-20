#include <stdio.h>


int main(){

    int a = 10;
    int b = -20;
    int c = 30;


    if (a > 0 && b < 0 || c == 0)
    {
       printf("Acondição é verdadeira!\n");
    }else {
        printf("Acondição é falsa!\n");
    }


    return 0;
    
}