#include <stdio.h>
#include <stdlib.h>

int fatorial_recursivo(int n);

int main(){
    int n;
    int resultado;
    printf("Entre com o numero para calculo de fatorial: ");
    scanf("%d", &n);

    resultado = fatorial_recursivo(n);
    printf("\n\nO resultado do fatorial do numero %d e: %d \n\n\n", n, resultado);
    system("pause");
}

int fatorial_recursivo(int n){
    //condição de parada
    if(n == 0 || n == 1){
    return 1;
    }
    //rechama da função ou passo recursivo
    return n * fatorial_recursivo(n - 1);
}
