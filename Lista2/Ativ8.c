#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;

    printf("\nInsira o valor 1: ");
    scanf(" %d", &n1);
    printf("\nInsira o valor 2: ");
    scanf(" %d", &n2);


    if(&n1 > &n2){
        printf("\nEndereco do numero 1 e maior: %p", &n1);
    }
    else if(&n1 < &n2){
        printf("\nEndereco do numero 2 e maior: %p", &n2);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}

