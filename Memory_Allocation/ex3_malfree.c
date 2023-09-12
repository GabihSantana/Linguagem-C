#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, i;
    p = (int*) malloc(10 * sizeof(int));

    for(i = 0; i < 10; i++){
        p[i] = i;
        printf("%d\n", p[i]);
    }
    free(p); //limpando a memória que foi utilizada
    printf("\n\n");
    for(i = 0; i < 10; i++){
        printf("%d\n", p[i]); //vendo o que está na memória que foi limpa
    }

}
