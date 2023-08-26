#include <stdio.h>
#include <stdlib.h>

int main() {
    int l = 3, c = 3, i, j;
    int matriz[3][3];

    for(i = 0; i < l; i++)
    for(j = 0; j < c; j++){
        *(*(matriz + i)+ j) = (i + 1) * (j + 1);
    }

    for(i = 0; i < l; i++)
        for(j = 0; j < c; j++){
            printf("%d\t", *(*(matriz + i)+j));
            if(j == 2){
                printf("\n");
            }
        }
    printf("\n\n\n");
    system("pause");
    return 0;
}
