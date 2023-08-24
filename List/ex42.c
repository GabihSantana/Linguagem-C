#include <stdio.h>
#include <stdlib.h>

int main(){
    float polegadas, centimetros;

    printf("\nInsira o comprimento em polegadas: ");
    scanf(" %f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("\nComprimento em centimetros: %.2f", centimetros);

    printf("\n\n\n");
    system("pause");
    return 0;
}




