#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam, i;
    float *vet = NULL;

    printf("\nInsira o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (float*) calloc (tam, sizeof(float));
    if(vet == NULL){
        printf("ERRO - Sem memoria!");
        exit(1);
    }

    for(i = 0; i < tam; i++){
        printf("\nInsira o valor de %d: ", i + 1);
        scanf(" %f", &vet[i]);
    }
    system("cls");
    printf("\nO vetor formado foi: \n");
    for(i = 0; i < tam; i++){
        printf("%.2f | ", vet[i]);
    }

    free(vet);
    printf("\n\n\n");
    system("pause");
    return 0;
}
