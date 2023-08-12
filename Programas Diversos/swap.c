#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int aux = 0;
    char resp = 's';
    
    while(resp == 's' || resp == 'S'){
        printf("\033[2J");
        printf("\033[1;34H");
        printf("Troca de Números - Swap");
        printf("\033[3;5H");
        printf("Digite um número: ");
        scanf("%d", &num1);
        printf("\033[4;5H");
        printf("Digite outro número: ");
        scanf("%d", &num2);
        printf("\033[6;5H");
        printf("Número 1: %d, Número 2: %d", num1, num2);
        
        aux = num2;
        num2 = num1;
        num1 = aux;
        printf("\033[7;5H");
        printf("Swap - Número 1: %d Número 2: %d", num1, num2);
        printf("\033[9;34H");
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resp);
    }
    return 0;
}
