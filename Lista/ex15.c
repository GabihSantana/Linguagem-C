#include <stdio.h>
#include <stdlib.h>

int main() {
    float sal, aumento;

    printf("\nInfore o salario: ");
    scanf(" %f", &sal);

    aumento = sal * 0.25;
    sal += aumento;

    printf("\nO valor do salario apos o aumento e de %.2f", sal);


    printf("\n\n");
    system("pause");
    return 0;
}
