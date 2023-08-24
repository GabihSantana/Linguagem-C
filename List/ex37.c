#include <stdio.h>
#include <stdlib.h>

int main(){
    float ms, km;

    printf("\nInsira a velocidade em m/s: ");
    scanf(" %f", &ms);

    km = ms * 3.6;

    printf("\nVelocidade em km/h: %.2f", km);

    printf("\n\n\n");
    system("pause");
    return 0;
}

