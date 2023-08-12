#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 5;

    if(i == 5){
        goto imprime;
    }

    i = 1350; //esta atribuição será ignorada

    imprime:
        printf("Valor de i: %d", i);


    printf("\n\n");
    system("pause");
    return 0;
}




