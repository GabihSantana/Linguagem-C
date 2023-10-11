#include <stdio.h>
#include <stdlib.h>

int menorValor(int vet[], int tam);

int main(){
    int n, i, menor;
    int *p = NULL;

    printf("\nInsira o tamanho do vetor: ");
    scanf(" %d", &n);

    p = (int*) malloc(n * sizeof(int));

    printf("\nInsira os valores do vetor: ");

    for(i = 0; i < n; i++){
        printf("\nPosicao %d: ", i);
        scanf(" %d", &p[i]);
    }
    printf("\nVetor: ");
    for(i = 0; i < n; i++){
        printf("%d ", p[i]);
    }

    menor = menorValor(p, n);
    printf("\n\nMenor valor do vetor: %d\n", menor);

    free(p);
    printf("\n\n\n");
    system("pause");
    return 0;
}

int menorValor(int vet[], int tam){
    int m;
    if(tam == 1){
        return vet[0];
    }
    m = menorValor(vet + 1, tam - 1);

    return (vet[0] < m)? vet[0] : m;
}
