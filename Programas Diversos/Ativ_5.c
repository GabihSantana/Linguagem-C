#include <stdio.h>
#include <stdlib.h>

int main() {
    int mtrx[5][5], v[10];
    int i = 0, j = 0, soma = 0;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Digite os valores da matriz na posicao: %d e %d: ", i , j);
            scanf("%d", &mtrx[i][j]);
        }
    }
    printf("\n\n Matriz: \n\n"); //imprimindo os numeros da matriz que foi inserida
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d  ", mtrx[i][j]);
            if (j == 4){
                printf("\n");
            }
        }
    }

    printf("\n\nTotal por linha: \n\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            soma = soma + mtrx[i][j];
        }
        printf("\nLinha %d : soma = %d\n", i + 1, soma);
        v[i] = soma;
        soma = 0;
    }
    soma = 0;
    printf("\n\nTotal por coluna: \n\n");
    for (j = 0; j < 5; j++){
        for (i = 0; i < 5; i++){
            soma = soma + mtrx[i][j];
        }
        printf("\nColuna %d: soma = %d\n\n", j + 1, soma);
        v[j + 5] = soma;
        soma = 0;
    }
    for (i = 0; i < 5; i++){
        printf("\nOs valores da soma da linha %d sao: %d\n", i + 1, v[i]);
        printf("\nOs valores da soma da coluna %d sao: %d\n", i + 1, v[i + 5]);
    }
    printf("\n\nVetor resultado da Matriz: \n\n"); //imprimindo o vetor de soma resultado da matriz
    for (i = 0; i < 5; i++){ //linha
        printf("%d ", v[i]);
    }
    for (i = 0; i < 5; i++) { //coluna
        printf("%d ", v[i + 5]);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
