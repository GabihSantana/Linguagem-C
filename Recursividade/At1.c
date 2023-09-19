#include <stdio.h>
#include <stdlib.h>

/*contagem regressiva com função Iterativa e Recursiva*/

    void funcIterativa(int n);
    void funcRecursiva(int n);

int main(){
    int num = 0;
    int resulIterativa;

    do{
        printf("\nInsira um valor: ");
        scanf(" %d", &num);
    }while(num <= 0);

    printf("\nVersao Iterativa: \n\n");
    funcIterativa(num);

    printf("\n\nVersao Recursiva: \n\n");
    funcRecursiva(num);

    printf("\n\n\n");
    system("pause");
    return 0;
}
void funcIterativa(int n){
    int i, k = 0;
    for(i = 0; i < n; i++){
        k = n - i;
        printf("%d\n", k);
    }
}

void funcRecursiva(int n){
    if(n > 0){
        printf("%d\n", n);
        funcRecursiva(n - 1);
    }
}
