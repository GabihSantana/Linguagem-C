#include <stdio.h>
#include <stdlib.h>

int main() {
    float sal, grat, imp, saltotal;

    printf("\nInforme seu salario-base: ");
    scanf(" %f", &sal);

    grat = sal * 0.05;
    imp = sal * 0.07;
    saltotal = sal + grat - imp;

    printf("\nO valor a receber e de %.2f", saltotal);


    printf("\n\n\n");
    system("pause");
    return 0;
}
