#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, tam = 5;
    int vet[tam];
    int *p = NULL;

    p = vet;

    for(i = 0; i < tam; i++){
        printf("\nInsira o valor de %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nVetor original: \n\n");
     for(i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }

    printf("\n\nValores dobrados: \n\n");
    for(i = 0; i < tam; i++){
        printf("%d ", p[i] * 2);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
