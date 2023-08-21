#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1 = 0;
    float num2 = 0;

    printf("Digite um numero inteiro: ");
    scanf(" %d", &num1);
    printf("Numero digitado: %d", num1);
    printf("\nDigite um numero real: ");
    scanf(" %f", &num2);
    printf("\nNumero digitado: %.2f", num2);

    printf("\n\n\n");
    system("pause");
    return 0;
}
