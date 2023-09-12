#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int*) calloc(5, sizeof(int));

    if(p == NULL){
        printf("ERRO: Sem memória!\n");
        exit(1);
    }

    int i;
    for(i = 0; i < 5; i++){
        printf("Digite p[%d]: ", i);
        scanf("%d", &p[i]);
    }
    printf("\nValores: \n");
    for(i = 0; i < 5; i++){
        printf("%d ", p[i]);
    }
    free(p);
}
