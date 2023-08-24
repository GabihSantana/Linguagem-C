#include <stdio.h>
#include <stdlib.h>

int main(){
    float milhas, km;

    printf("\nInsira a distancia em quilometros: ");
    scanf(" %f", &km);

    milhas = km / 1.61;

    printf("\nDistancia em milhas: %.2f", milhas);

    printf("\n\n\n");
    system("pause");
    return 0;
}

