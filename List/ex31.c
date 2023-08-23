#include <stdio.h>
#include <stdlib.h>

int main(){
    float c, l, p, total;

    printf("\nInsira o comprimento do terreno: ");
    scanf(" %f", &c);
    printf("\nInsira a largura do terreno: ");
    scanf(" %f", &l);
    printf("\nInsira o preco do metro do arame: ");
    scanf(" %f", &p);

    total = (2 * (c + l)) * p;

    printf("\nCusto para cercar o terreno: %.2f", total);

    printf("\n\n\n");
    system("pause");
    return 0;
}

