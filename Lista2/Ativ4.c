#include <stdio.h>
#include <stdlib.h>

int func_inverte(int x);

int main(){
    int numero;
    printf("\nDigite um numero: ");
    scanf(" %d", &numero);

    system("cls");
    printf("\nNumero lido = %d", numero);

    printf("\nNumero retornado = ");
    func_inverte(numero);

    printf("\n\n\n");
    system("pause");
    return 0;
}

int func_inverte(int x){
     if(x / 10 <= 0)
    {
        printf("%d", x);
        return 1;
    }
    printf("%d", x % 10);
    func_inverte(x / 10);
}
