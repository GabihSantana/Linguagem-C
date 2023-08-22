#include <stdio.h>
#include <stdlib.h>

int main() {
    float diastrab, dia = 30, desc, liq;

    printf("\nInforme o numero de dias trabalhados: ");
    scanf(" %f", &diastrab);

    desc = dia * 0.08;
    liq = dia - desc;

    printf("\nA quantia liquida que devera ser paga e de %.2f", liq * diastrab);

    printf("\n\n\n");
    system("pause");
    return 0;
}
