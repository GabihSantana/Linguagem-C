#include <stdio.h>
#include <stdlib.h>

int main(){
    float metros, hec;

    printf("\nInsira o valor da area em hectares: ");
    scanf(" %f", &hec);

    metros = hec * 10000;

    printf("\nArea em metros quadrados: %.2f", metros);

    printf("\n\n\n");
    system("pause");
    return 0;
}


