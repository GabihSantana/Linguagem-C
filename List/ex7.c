#include <stdio.h>
#include <stdlib.h>

int main(){
    float real, dolar;

    printf("\nInsira o valor do real: ");
    scanf(" %f", &real);
    printf("\nInstira a cotacao do dolar: ");
    scanf(" %f", &dolar);

    printf("\nO valor em dolar corresponde a %.2f USD", real * dolar);


    printf("\n\n\n");
    system("pause");
    return 0;
}
