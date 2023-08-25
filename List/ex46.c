#include <stdio.h>
#include <stdlib.h>

int main() {
    float kg, lb;

    printf("\nInsira o valor de massa em quilogramas: ");
    scanf(" %f", &kg);

    lb = kg / 0.45;

    printf("\nA massa em libras e de %.2f", lb);


    printf("\n\n\n");
    system("pause");
    return 0;
}

