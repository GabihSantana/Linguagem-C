#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet = NULL, i;
    vet = (int*) malloc(15 * sizeof(int));
    for(i = 0; i < 15; i++){
        vet[i] = i * 2;
        printf("i: %2d * 2 = %2d\n", i, vet[i]);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
