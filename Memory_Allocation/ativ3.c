#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mat, **mat2;
    int numLinha, numColuna, i, j;

    //Pegando a dimensão das matrizes
    printf("\nInsira a quantidade de linhas: ");
    scanf(" %d", &numLinha);
    printf("\nInsira a quantidade de colunas: ");
    scanf(" %d", &numColuna);

    //alocando memória e criando as linhas da primeira matriz
    mat = (int**) calloc(numLinha, sizeof(int*));

    //verificando memória - just in case
    if(mat == NULL){
        printf("ERRO: Sem memoria!\n");
        exit(1);
    }
    //alocando memória e criando as linhas da segunda matriz
    mat2 = (int**) calloc(numLinha, sizeof(int*));

    //verificando memória
    if(mat2 == NULL){
        printf("ERRO: Sem memoria!\n");
        exit(1);
    }

    //criando as colunas da matriz para cada ponteiro do array linha
    for(i = 0; i < numLinha; i++){
        mat[i] = (int*) calloc(numColuna, sizeof(int));
        mat2[i] = (int*) calloc(numColuna, sizeof(int));
    }

    //atribuindo valores
    printf("\n\tInsira os valores da primeira matriz: \n");
    for(i = 0; i < numLinha; i++){
        for(j = 0; j < numColuna; j++){
            printf("\nPosicao [%d][%d]: ", i, j);
            scanf(" %d", &mat[i][j]);
        }
    }
    system("pause");
    system("cls"); //limpar o console

    printf("\n\tInsira os valores da segunda matriz: \n");
    for(i = 0; i < numLinha; i++){
        for(j = 0; j < numColuna; j++){
            printf("\nPosicao [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    system("pause");
    system("cls");

    //imprimindo a matriz na tela
    printf("\n\tMatriz 1: \n\n");
    for(i = 0; i < numLinha; i++){
        for(j = 0; j < numColuna; j++){
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\n\tMatriz 2: \n\n");
    for(i = 0; i < numLinha; i++){
        for(j = 0; j < numColuna; j++){
            printf("%3d ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\n\tSoma das matrizes: \n\n");
    for(i = 0; i < numLinha; i++){
        for(j = 0; j < numColuna; j++){
            printf("%3d ", mat[i][j] + mat2[i][j]);
        }
        printf("\n");
    }

    //liberando memória da matriz
    for(i = 0; i < numLinha; i++){
        free(mat[i]);
    }
    free(mat);

    for(i = 0; i < numLinha; i++){
        free(mat2[i]);
    }
    free(mat2);

    printf("\n\n\n");
    system("pause");
    return 0;
}
