#include <stdio.h>
#include <stdlib.h>

void iterativa(int x);
int recursiva(int y);
int recursiva2(int z);

int main(){
    int n;
    int op;

    printf("Insira um numero inteiro: ");
    scanf(" %d", &n);

    printf("\nSelecione: 1 - Iterativa | 2 - Recursiva: ");
    scanf(" %d", &op);

    switch(op){
        case 1:
            iterativa(n);
            break;
        case 2:
            recursiva(n);
            recursiva2(n);
            break;
        default:
            printf("\nOpcao invalida!");
            break;
    }
    printf("\n\n");
    system("pause");
    return 0;
}

void iterativa(int x){
    int i, j;
    for(i = 0; i < x - 1; i++){
        for(j = 0; j < i + 1; j++){
            printf("*");
        }
        printf("\n");
}
    for(i = x; i > 0; i--){
        for(j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
}

int recursiva(int y){
    int i;
    if(y <= 0){
        return 1;
    }
    recursiva(y - 1);
    for(i = 0; i < y - 1; i++){
        printf("*");
    }
    printf("\n");
}

int recursiva2(int z){
    int i;
    if(z <= 0){
        return 1;
    }
    for(i = z; i > 0; i--){
        printf("*");
    }
    printf("\n");
    recursiva2(z - 1);
}

