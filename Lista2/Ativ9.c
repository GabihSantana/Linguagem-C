#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    int *a, *b;

    printf("\nInsira o primeiro valor: ");
    scanf(" %d", &n1);
    printf("\nInsira o segundo valor: ");
    scanf(" %d", &n2);

    a = &n1;
    b = &n2;

    if(&a > &b){
        printf("\nO primeiro numero tem o maior endereco e seu conteudo e de %d", *a);
    }
    else if(&a < &b){
        printf("\nO segundo numero tem o maior endereco e seu conteudo e de %d", *b);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
