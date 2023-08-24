#include <stdio.h>
#include <stdlib.h>

int main(){
    float km, ms;

    printf("\nInsira a velocidade em km/h: ");
    scanf(" %f", &km);

    ms = km / 3.6;

    printf("\nVelocidade em m/s: %.2f", ms);

    printf("\n\n\n");
    system("pause");
    return 0;
}
