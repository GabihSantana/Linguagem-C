#include <stdio.h>
#include <stdlib.h>

int main() {
    float jardas, metros;

    printf("\nInsira o valor do comprimento em metros: ");
    scanf(" %f", &metros);

    jardas = metros / 0.91;

    printf("\nO comprimento em jardas e de %.2f", jardas);


    printf("\n\n\n");
    system("pause");
    return 0;
}



