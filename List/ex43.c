#include <stdio.h>
#include <stdlib.h>

int main(){
    float polegadas, centimetros;

    printf("\nInsira o comprimento em centimetros: ");
    scanf(" %f", &centimetros);

    polegadas = centimetros / 2.54;

    printf("\nComprimento em polegadas: %.2f", polegadas);

    printf("\n\n\n");
    system("pause");
    return 0;
}





