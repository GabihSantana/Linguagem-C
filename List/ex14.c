#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor, desc;

    printf("\nInsira o valor de um produto: ");
    scanf(" %f", &valor);

    desc = valor * 0.12;
    valor -= desc;

    printf("\nO valor do produto com 12%% de desconto e: %.2f", valor);


    printf("\n\n");
    system("pause");
    return 0;
}
