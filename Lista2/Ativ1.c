#include <stdio.h>
#include <stdlib.h>

int itinera(int y);
int recursividade(int x);

int main(){
    int n = 0;
    int m;
    int escolha;

    printf("\nInsira um valor inteiro: ");
    scanf(" %d", &n);
    printf("\nDigite 1 - Funcao iterativa | 2 - Recursiva: ");
    scanf(" %d", &escolha);

    switch(escolha){
        case 1:
            itinera(n);
            break;
        case 2:
            recursividade(n);
            break;
        default:
            printf("Invalido!");
            break;
    }

    printf("\n\n\n");
    system("Pause");
    return 0;
}
int itinera(int y){
    int i, j;
    for(i = 0; i < y; i++){
        for(j = 0; j < i + 1; j++){
            printf("!");
        }
        printf("\n");
    }
}
int recursividade(int x){
    int i;
    if(x <= 0){
        return 1;
    }
   recursividade(x - 1);
   for(i = 0; i < x; i++){
        printf("!");
    }
    printf("\n");
}
