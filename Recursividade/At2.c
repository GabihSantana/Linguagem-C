#include <stdio.h>
#include <stdlib.h>

    int funcRec(int n);
    int funcIte(int n);

int main(){
    int n = 0;
    int resultado, resultado2;
    int e;

    do{
        printf("\nInsira um valor: ");
        scanf(" %d", &n);
    }while(n <= 0);

    printf("\n\n\tSelecione o metodo de calculo: \n");
    printf("\n1 - funcaoo Iterativa | 2 - funcao recursiva: ");
    scanf(" %d", &e);

    switch(e){
        case 1:
            printf("\nVersao Iterativa: \n");
            resultado2 = funcIte(n);
            printf("%d\n", resultado2);
            break;

        case 2:
            printf("\n\nVersao Recursiva: \n\n");
            resultado = funcRec(n);
            printf("%d\n", resultado);
            break;

        default:
            printf("\nErro - Metodo de calculo nao disponivel");
            break;
    }

    printf("\n\n");
    system("pause");
    return 0;
}

int funcIte(int n){
    int i, soma = 0;
    for(i = 0; i < n; i++){
        soma += i;
    }
    return soma + n;
}

int funcRec(int n){
    if(n == 0){
        return 0;
    }
    return (n + funcRec(n - 1));
}

