#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetf[] = {1,2,3,4,5,6,7,8,9,10};
    double vetd[] = {1,2,3,4,5,6,7,8,9,10};
    int i, tam = 10;

    printf("\nVetor de dado float: \n");

    for(i = 0; i < tam; i++){
        printf("\nPosicao %2d: \t%p ", i + 1, &vetf[i]);
    }
    printf("\n\n");
    printf("\nVetor de dado double: \n");

    for(i = 0; i < tam; i++){
        printf("\nPosicao %2d: \t%p ", i + 1, &vetd[i]);
    }



    printf("\n\n\n");
    system("pause");
    return 0;
}
