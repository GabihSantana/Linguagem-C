#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3, somsqr;
    printf("Insira o primeiro numero: ");
    scanf(" %d", &n1);
    printf("\nInsira o segundo numero: ");
    scanf(" %d", &n2);
    printf("\nInsira o terceiro numero: ");
    scanf(" %d", &n3);

    somsqr = (n1 * n1) + (n2 * n2) + (n3 * n3);

    printf("\nA soma dos quadrados dos tres numeros e %d", somsqr);

    printf("\n\n\n");
    system("pause");
    return 0;
}
