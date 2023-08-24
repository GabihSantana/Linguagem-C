#include <stdio.h>
#include <stdlib.h>

int main(){
    float milhas, km;

    printf("\nInsira a distancia em milhas: ");
    scanf(" %f", &milhas);

    km = 1.61 * milhas;

    printf("\nDistancia em quilometros: %.2f", km);

    printf("\n\n\n");
    system("pause");
    return 0;
}

