#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int dif = 0;
    char resp = 's';
    
    while(resp == 's' || resp == 'S'){
        printf("\033[2J");
        printf("\033[1;34H");
        printf("Comparação e Diferença\n");
        printf("\033[2;5H");
        printf("Digite um número: ");
        scanf("%d", &num1);
        printf("\033[3;5H");
        printf("Digite outro número: ");
        scanf("%d", &num2);
        if (num1 == num2) {
            printf("\033[5;5H");
            printf("Os números são iguais");
        }
        else
            if (num1 > num2) {
                printf("\033[5;5H");
                printf("O número %d é maior que o número %d", num1, num2);
            }
        else {
            printf("\033[5;5H");
            printf("O número %d é menor que o número %d", num1, num2);
        }
        dif = num1 - num2;
        printf("\033[6;5H");
        printf("A diferença entre os números %d e %d é de %d", num1, num2, dif);
        printf("\033[8;34H");
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resp);
    }
    return 0;
}
