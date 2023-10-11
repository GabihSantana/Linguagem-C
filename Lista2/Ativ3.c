#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat_a[6][6];
    int i,j;
    int soma = 0, soma2 = 0;

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            printf("\nNumero: ");
            scanf(" %d", &mat_a[i][j]);
        }
    }

    system("cls");
    printf("\nMatriz: \n\n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            printf("%d ", mat_a[i][j]);
            if(i == j){
                soma += mat_a[i][j];
            }else if(j == 5 - i){
                soma2 += mat_a[i][5 - i];
            }
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d", soma);
    printf("\nSoma da diagonal secundaria: %d", soma2);



    printf("\n\n\n");
    system("Pause");
    return 0;
}
