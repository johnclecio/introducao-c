#include <stdio.h>

void entradaDados(int *valor1, int *valor2){
    
    printf("Digite o Primeiro Valor: \n");
    scanf("%d", valor1);

   printf("Digite o Segundo Valor: \n");
   scanf("%d", valor2);
}
float calcularMedia(int valor1, int valor2){
    return (valor1 + valor2) / 2;
}

void exibirMedia(float media){
    printf("A média é: %.2f\n", media);
}

void exibirNumeroPar(int valor1){
    
    if (valor1  % 2 == 0)
    {
       printf("%d O número é par: \n", valor1 );
    }else{
        printf("%d O número é impar: \n", valor1 );
    }
    
    
}
//soma
int somaValor(int valor1, int valor2){
    return valor1 + valor2;

}
//subtracao
int subValor(int valor1, int valor2){
    return valor1 - valor2;
}
//multiplicação
int multValor(int valor1, int valor2){
    return valor1 * valor2;
}
//divisão
int divValor(int valor1, int valor2){
    return valor1 / valor2;
}
//exibir na tela 
void exibirValor(int total, int subtotal, int multotal, int divtotal){
    printf("A soma é: %d\n", total);
    printf("A subtração é: %d\n", subtotal );
    printf("A multiplicação é: %d\n", multotal );
    printf("A divisão é: %d\n", divtotal );
}

int main()
{
    int valor1, valor2, media, imparOuPar, total, subtotal, multotal, divtotal;

    //entradaDados(&valor1, &valor2);
    //media = calcularMedia(valor1, valor2);
    //exibirMedia(media);
    //exibirNumeroPar(valor1);
    /*
    
    entradaDados(&valor1, &valor2);
    total = somaValor(valor1, valor2);
    subtotal = subValor(valor1, valor2);
    multotal = multValor(valor1, valor2);
    divtotal =divValor(valor1, valor2);
    exibirValor(total, subtotal, multotal, divtotal);
    */

    int numero1 = 1, resultado;

    printf("Antes do incremento: %d\n",numero1);


    resultado = numero1++;
    printf("Apos Pos-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Apos Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);


    resultado = numero1--;
    printf("Apos Pos-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Apos Pré-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);


    return 0;
}
