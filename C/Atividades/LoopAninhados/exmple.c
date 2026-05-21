#include <stdio.h>



int main(){


    int i, j;


    for (i = 0; i < 5; i++)
    {
       char letra = 'A';

       for (j = 0; j <=i; j++)
       {
           printf("%c", letra);
           ++letra;
       }

       printf("\n");
       
    }
    
}