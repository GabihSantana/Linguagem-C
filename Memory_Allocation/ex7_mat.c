#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas = 3, colunas = 2, i, j;
    int **matriz;
    matriz = (int**) malloc (linhas * sizeof(int));
    for(i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n\n\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    //limpar a memória:
    for(i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
    printf("\n\n\n");

    //ver o que foi colocado dentro da matriz após ser limpa:
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    system("pause");
}
