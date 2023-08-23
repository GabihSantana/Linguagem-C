#include <stdio.h>
#include <stdlib.h>

int main() {
    int gf, gc;

    printf("\nInsira a temperatura em graus Fahrenheit: ");
    scanf(" %d", &gf);

    gc = 5 * (gf - 32) / 9;

    printf("\nTemperatura em Celsius: %dC", gc);


    printf("\n\n\n");
    system("pause");
    return 0;
}

