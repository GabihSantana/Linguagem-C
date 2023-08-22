#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, desc, valordesc, parc, comis, comisparc;

    printf("\nInforme o valor total: ");
    scanf(" %f", &valor);

    desc = valor * 0.10;
    valordesc = valor - desc;
    printf("\nTotal a pagar com desconto de 10%%: %.2f", valordesc);

    parc = valor / 3;
    printf("\nValor de cada parcela no parcelamento de 3x sem juros: %.2f", parc);

    comis = valordesc * 0.05;
    printf("\nComissao do vendedor - venda a vista: %.2f", comis);

    comisparc = valor * 0.05;
    printf("\nComissao do vendedor - venda parcelada: %.2f", comisparc);


    printf("\n\n\n");
    system("pause");
    return 0;
}
