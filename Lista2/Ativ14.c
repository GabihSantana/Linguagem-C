#include <stdio.h>
#include <stdlib.h>

int *vetores(int *vet_a, int *vet_b, int tam);

int main(){
    int tam, i;
    int *vet_a = NULL;
    int *vet_b = NULL;
    int *vet_c = NULL;

    printf("Insira o tamanho dos vetores: ");
    scanf(" %d", &tam);

    vet_a = (int*) calloc(tam, sizeof(int));
    vet_b = (int*) calloc(tam, sizeof(int));

    if(vet_a == NULL || vet_b == NULL){
        printf("ERRO - Sem memoria!");
        exit(1);
    }
    printf("\nInsira os valores do vetor A: \n");
    for(i = 0; i < tam; i++){
        printf("Posicao %d: ", i + 1);
        scanf(" %d", &vet_a[i]);
    }
    printf("\nInsira os valores do vetor B: \n");
    for(i = 0; i < tam; i++){
        printf("Posicao %d: ", i + 1);
        scanf(" %d", &vet_b[i]);
    }
    vet_c = vetores(vet_a, vet_b, tam);

    printf("\nResultado da soma dos vetores C:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet_c[i]);
    }

    free(vet_a);
    free(vet_b);
    free(vet_c);

    printf("\n\n\n");
    system("pause");
    return 0;
}
int *vetores(int *vet_a, int *vet_b, int tam){
    int i;
    int *vet_c = NULL;
    vet_c = (int*) calloc(tam, sizeof(int));
    if(vet_c == NULL){
        printf("ERRO - Sem memoria!");
        exit(1);
    }
    for(i = 0; i < tam; i++){
        vet_c[i] = vet_a[i] + vet_b[i];
    }
    return vet_c;
}
