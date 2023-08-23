#include <stdio.h>
#include <stdlib.h>

int main(){
    float i1, i2, i3, premio, total, a1, a2, a3;

    printf("\nInsira o valor que foi investido por 1: ");
    scanf(" %f", &i1);
    printf("\nInsira o valor que foi investido por 2: ");
    scanf(" %f", &i2);
    printf("\nInsira o valor que foi investido por 3: ");
    scanf(" %f", &i3);

    printf("\nInsira o valor do premio: ");
    scanf(" %f", &premio);

    total = i1 + i2 + i3;
    a1 = (i1 * 100) / total;
    a2 = (i2 * 100) / total;
    a3 = (i3 * 100) / total;

    printf("\nO primeiro investiu %.2f%%, então ira receber %.2f", a1, premio * (a1/100));
    printf("\nO segundo investiu %.2f%%, então ira receber %.2f", a2, premio * (a2/100));
    printf("\nO terceiro investiu %.2f%%, então ira receber %.2f", a3, premio * (a3/100));

    printf("\n\n\n");
    system("pause");
    return 0;
}
