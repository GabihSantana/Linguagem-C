#include <stdio.h>
#include <stdlib.h>

int main() {
    float jardas, metros;

    printf("\nInsira o valor do comprimento em jardas: ");
    scanf(" %f", &jardas);

    metros = jardas * 0.91;

    printf("\nO comprimento em metros e de %.2f", metros);


    printf("\n\n\n");
    system("pause");
    return 0;
}


