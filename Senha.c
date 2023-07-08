#include <stdio.h>

int main()
{
    char senha = '#';
    char valor;
    
    do
    {
        printf("\033[2J"); 
        printf("\033[1;34H");
        printf("Senha: ");
        scanf("%c", &valor);
    } while (valor != senha);
        printf("\033[2;5H");
        printf("Senha correta");
    
    return 0;
}
