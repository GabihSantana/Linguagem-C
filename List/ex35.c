#include <stdio.h>
#include <stdlib.h>

int main() {
    float gc, gk;

    printf("\nInsira a temperatura em graus Celsius: ");
    scanf(" %f", &gc);

    gk = gc + 273.15;

    printf("\nTemperatura em Kelvin: %.2fK", gk);


    printf("\n\n\n");
    system("pause");
    return 0;
}


