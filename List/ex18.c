#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float valorhora, horatrab, sal, add, salliq;

    printf("\nInforme o valor da hora de trabalho (em reais): ");
    scanf(" %f", &valorhora);

    printf("\nInforme o n�mero de horas trabalhadas no m�s: ");
    scanf(" %f", &horatrab);

    sal = (valorhora * horatrab);
    add = sal * 0.10;
    salliq = sal + add;

    printf("\nO valor pago � de %.2f", salliq);


    printf("\n\n\n");
    system("pause");
    return 0;
}

