#include <stdio.h>
#include <stdlib.h>

int main() {
    float mc, L;

    printf("\nInsira o valor de volume em litros: ");
    scanf(" %f", &L);

    mc = L / 1000;

    printf("\nO volume de %.1fL em metros cubicos e: %.1fmc", L, mc);


    printf("\n\n\n");
    system("pause");
    return 0;
}

