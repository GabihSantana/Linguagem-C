#include <stdio.h>
#include <stdlib.h>

int main() {
    float kg, lb;

    printf("\nInsira o valor de massa em Libras: ");
    scanf(" %f", &lb);

    kg = lb * 0.45;

    printf("\nA massa em quilogramas e de %.2f", kg);


    printf("\n\n\n");
    system("pause");
    return 0;
}


