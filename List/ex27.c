#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade, ano, nasc;

    printf("\nInsira a sua idade: ");
    scanf(" %d", &idade);
    printf("\nInsira o ano que esta(aaaa): ");
    scanf(" %d", &ano);

    nasc = ano - idade;

    printf("\nO ano de seu nascimento e %d", nasc);

    printf("\n\n\n");
    system("pause");
    return 0;
}

