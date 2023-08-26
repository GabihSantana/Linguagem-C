#include <stdio.h>
#include <stdlib.h>

int main(){
    float metros, acres;

    printf("\nInsira o valor da area em metros quadrados: ");
    scanf(" %f", &metros);

    acres = metros * 0.000247;

    printf("\nArea em acres: %.2f", acres);

    printf("\n\n\n");
    system("pause");
    return 0;
}
