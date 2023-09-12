#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, i;
    p = (int*) malloc (5 * sizeof(int));

    for(i = 0; i < 5; i++){
        p[i] = i + 10;
    }

    for(i = 0; i < 5; i++){
        printf("posicao p [%d] %d\n", i, p[i]);
    }
    //realocando para 10 posições:
    p = (int*) realloc(p, 10 * sizeof(int));
    //preenchendo a partir da 6° posição
    for(i = 5; i < 10; i++){
        p[i] = i + 100;
    }
    printf("\n\tAgora com novo espaço alocado:\n\n");
    for(i = 0; i < 10; i++){
        printf("posicao p[%d] %d\n", i, p[i]);
    }
    system("pause");
}
