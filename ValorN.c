#include <stdio.h>

int main()
{
    int num1 = 0;
    char resp = 's';
    
    while (resp == 's' || resp == 'S')
    {
        printf("\033[2J");
        printf("\033[1;34H");
        printf("Número Positivo ou Negativo");
        printf("\033[3;5H");
        printf("Digite um número: ");
        scanf("%d", &num1);
        if (num1 == 0){
            printf("\033[4;5H");
            printf("Número zero");
        }
        else
            if (num1 > 0){ 
                printf("\033[4;5H");
                printf ("O número %d é Positivo", num1);
            }
            else {
            printf("\033[4;5H");
            printf("O número %d é Negativo", num1);
            }
            printf("\033[5;34H");
            printf("Deseja continuar? (S/N): ");
            scanf(" %c", &resp);
    }
    return 0;
}
