#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    int *p = &x; //ponteiro para int (1 nível)
    int **q = &p; //ponteiro para ponteiro de int (2 níveis)

    printf("q: %d\n", q); //imprime o end de p
    printf("*q: %d\n", *q); //imprime o end de x (conteudo de p - &x)
    printf("**q: %d\n", **q); //imprime o conteúdo do endereço do endereço x = 10


    printf("\n\n\n");
    system("pause");
    return 0;
}
