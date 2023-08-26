#include <stdio.h>
#include <stdlib.h>

int main(){
    float metros, hec;

    printf("\nInsira o valor da area em metros quadrados: ");
    scanf(" %f", &metros);

    hec = metros * 0.0001;

    printf("\nArea em hectares: %.2f", hec);

    printf("\n\n\n");
    system("pause");
    return 0;
}

