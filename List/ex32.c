#include <stdio.h>
#include <stdlib.h>

int main() {
    int gc, gf;

    printf("\nInsira a temperatura em graus Celsius: ");
    scanf(" %d", &gc);

    gf = gc * (9 / 5) + 32;

    printf("\nTemperatura em Fahrenheit: %dF", gf);


    printf("\n\n\n");
    system("pause");
    return 0;
}
