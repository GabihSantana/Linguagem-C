#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, *b, **c, ***d;

    printf("Insira o valor da variavel: ");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf("\nValor dobrado: %d", *b * 2);
    printf("\nValor triplicado: %d", **c * 3);
    printf("\nValor quadruplicado: %d", ***d * 4);


    printf("\n\n\n");
    system("pause");
    return 0;
}
