#include <stdio.h>
#include <stdlib.h>

int soma(int vet[], int n);

int main(){
    int n, i, sum;
    int *p = NULL;

    printf("\nInsira o tamanho do vetor: ");
    scanf(" %d", &n);

    p = (int*) malloc(n * sizeof(int));

    printf("\nInsira os valores do vetor: ");

    for(i = 0; i < n; i++){
        printf("\nPosicao %d: ", i);
        scanf(" %d", &p[i]);
    }
    for(i = 0; i < n; i++){
        printf("%d ", p[i]);
    }

    sum = soma(p, n);
    printf("\n\nSoma: %d", sum);

    free(p);
    printf("\n\n\n");
    system("pause");
    return 0;
}

int soma(int vet[], int n){
    if(n == 0){
        return 0;
    }
    return vet[0] + soma(vet + 1, n - 1);
}
