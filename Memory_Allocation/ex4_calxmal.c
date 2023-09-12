#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int *p_malloc, *p_calloc;

    p_malloc = (int*) malloc(5 * sizeof(int));
    p_calloc = (int*) calloc(5, sizeof(int));
    printf("calloc() \t\t malloc() \n");
    for(i = 0; i < 5; i++){
        printf("p_calloc[%d] = %d \t", i, p_calloc[i]);
        printf("p_malloc[%d] = %d \n", i, p_malloc[i]);
    }
    printf("\n\n");
}
