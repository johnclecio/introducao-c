#include <stdio.h>


int main(){
    char produtoA [30] = "produtoA";
    char produtoB [30] = "produtoB";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("o produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("o produto %s tem estoque minimo %d\n", produtoB, resultadoB);


    printf("o valor total de A (R$ %.2f) é maior que o valor de B (R$%.2f)?: %d\n",
                                estoqueA * valorA,
                                estoqueB * valorB,
                            (estoqueA * valorA) > (estoqueB * valorB));

}