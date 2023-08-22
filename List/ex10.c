#include <stdio.h>
#include <stdlib.h>

int main(){
    float sqr;
    printf("\nInsira o tamanho do lado de um quadrado: ");
    scanf(" %f", &sqr);

    printf("\nO resultado da area desse quadrado e %.2fcm", sqr * sqr);

    printf("\n\n\n");
    system("pause");
    return 0;
}
