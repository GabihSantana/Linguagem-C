#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x, y;
    float distancia;

    printf("\nInsira as coordenadas x e y: ");
    scanf(" %f %f", &x, &y);

    distancia = sqrt(x * x + y * y);

    printf("\nA distancia eh %.2f", distancia);


    printf("\n\n\n");
    system("pause");
    return 0;
}
