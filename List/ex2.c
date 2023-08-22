#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1 = 0, n2 = 0, n3 = 0, soma = 0;
    printf("Insira o primeiro numero: ");
    scanf(" %d", &n1);
    printf("\nInsira o segundo numero: ");
    scanf(" %d", &n2);
    printf("\nInsira o terceiro numero: ");
    scanf(" %d", &n3);

    soma = n1 + n2 + n3;

    printf("\nA soma de %d + %d + %d = %d", n1, n2, n3, soma);


    printf("\n\n\n");
    system("pause");
    return 0;
}
