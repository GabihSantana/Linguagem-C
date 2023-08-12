#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int resto = 0;
    char resp = 's';
    
    while(resp == 's' || resp == 'S'){
        printf("\033[2J");
        printf("\033[1;34H");
        printf("Resto de divisão");
        printf("\033[2;5H");
        printf("Digite um número: ");
        scanf("%d", &num1);
        printf("\033[3;5H");
        printf("Digite outro número: ");
        scanf("%d", &num2);
        
        resto = num1 % num2;
        printf("\033[5;5H");
        printf("O número %d dividido pelo número %d tem resto %d", num1, num2, resto);
        printf("\033[7;34H");   
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resp);
    }
    return 0;
}
