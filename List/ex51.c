#include <stdio.h>
#include <stdlib.h>

int main(){
    float metros, acres;

    printf("\nInsira o valor da area em acres: ");
    scanf(" %f", &acres);

    metros = acres * 4048.58;

    printf("\nArea em metros quadrados: %.2f", metros);

    printf("\n\n\n");
    system("pause");
    return 0;
}

