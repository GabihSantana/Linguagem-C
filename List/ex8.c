#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("\n Insira um numero: ");
    scanf( "%d", &num);

    printf("\nAntecessor: %d", num - 1);
    printf("\nNumero digitado: %d", num);
    printf("\nSucessor: %d", num + 1);


    printf("\n\n\n");
    system("pause");
    return 0;
}

