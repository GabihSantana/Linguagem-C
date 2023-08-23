#include <stdio.h>
#include <stdlib.h>

int main() {
    float gk, gc;

    printf("\nInsira a temperatura em graus Kelvin: ");
    scanf(" %f", &gk);

    gc = gk - 273.15;

    printf("\nTemperatura em Celsius: %.2fC", gc);


    printf("\n\n\n");
    system("pause");
    return 0;
}


