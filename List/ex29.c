#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    int origemx = 0, origemy = 0;

    printf("\nInsira as coordenadas x e y: ");
    scanf(" %d %d", &x, &y);


    origemx = x - origemx;
    origemy = y - origemy;

    printf("\nA distancia da origem e de %d e %d", origemx, origemy);


    printf("\n\n\n");
    system("pause");
    return 0;
}
