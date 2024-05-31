#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

int main()
{
    int vetor[8] = {2, 3, 4, 0, 6, 1, 5, 7};
    int inicio = 0, fim = 8;
    int i;

    printf("\nVetor desordenado: ");
    for(i = 0; i < fim; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n\nMerge Sort: ");
    mergeSort(vetor, inicio, fim);

    printf("\n\n\n");
}
