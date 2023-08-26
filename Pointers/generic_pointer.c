#include <stdio.h>
#include <stdlib.h>

void main(){
    /*Ponteiros genéricos pode apontar para todos os tipos de dados existentes ou que ainda serão criados, porém será
    necessário utilizar o operador typecast (converter o ponteiro generico para o tipo de ponteiro que irá ser trabalhado*/

    void *ptrgen;
    int *ptr, x = 10;

    ptr = &x; //ptr recebe o end de x
    ptrgen = ptr; //endereço de int

    //printf("\nConteudo do endereco em ptrgen: %d", *ptrgen); //gera erro - Invalid use of void expression
    printf("\nConteudo do endereco em ptrgen: %d", *(int*)ptrgen); //typecast - o primeiro * permite acessar o conteúdo


    printf("\n\n\n");
    system("pause");
}

