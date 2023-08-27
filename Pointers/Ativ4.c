#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, *p1, *p2;

    printf("\nInsira o primeiro numero: ");
    scanf(" %d", &num1);
    printf("\nInsira o segundo numero: ");
    scanf(" %d", &num2);

    p1 = &num1;
    p2 = &num2;

    if(p1 > p2){
        printf("\nEndereco da variavel num1: %p", p1);
        printf("\nConteudo da variavel num1: %d", *p1);
    }else
        if(p1 < p2){
            printf("\nEndereco da variavel num2: %p", p2);
            printf("\nConteudo da variavel num2: %d", *p2);
        }
        else{ // p1 == p2
            printf("\nnum1 e num2 tem armazenado o mesmo endereco: %p", p1);
            printf("\nConteudo das variaveis num1 e num2: %d", *p1);
        }

    printf("\n\n\n");
    system("pause");
    return 0;
}
