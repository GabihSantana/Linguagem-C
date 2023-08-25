#include <stdio.h>
#include <stdlib.h>

int main() {
    float mc, L;

    printf("\nInsira o valor de volume em metros cubicos: ");
    scanf(" %f", &mc);

    L = 1000 * mc;

    printf("\nO volume de %.1fmc em litros e: %.1f", mc, L);


    printf("\n\n\n");
    system("pause");
    return 0;
}
