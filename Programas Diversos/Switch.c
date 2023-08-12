#include <stdio.h>

int main()
{
    char letra;
    printf("\033[1;34H");
    printf("Digite a letra de uma fruta: ");
    scanf("%c", &letra);
    
    switch (letra)
    {
        case 'a': 
        case 'A':
            printf("Abacate\n");
            break;
        case 'm':
        case 'M':
            printf("Melão\n");
            break;
        case 'l':
        case 'L':
            printf("Laranja\n");
            break;
            
        default:
            printf("Não acertou");
            break;
    }
    return 0;
}
