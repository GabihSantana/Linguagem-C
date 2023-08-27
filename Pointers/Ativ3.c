#include <stdio.h>
#include <stdlib.h>

void muda_valor(int *p1, int *p2, int *p3);

int main (){
    int n1, n2, n3;
    int *p1, *p2, *p3;

    printf("\nInsira o primeiro numero: ");
    scanf(" %d", &n1);
    printf("\nInsira o segundo numero: ");
    scanf(" %d", &n2);
    printf("\nInsira o terceiro numero: ");
    scanf(" %d", &n3);

    p1 = &n1;
    p2 = &n2;
    p3 = &n3;

    muda_valor(&n1, &n2, &n3);

    printf("\nNumero 1 apos adicionar 100: %d", *p1);
    printf("\nNumero 2 apos adicionar 100: %d", *p2);
    printf("\nNumero 3 apos adicionar 100: %d", *p3);

    printf("\n\n\n");
    system("pause");
    return 0;
}

void muda_valor(int *p1, int *p2, int *p3){
    *p1 += 100;
    *p2 += 100;
    *p3 += 100;
}
