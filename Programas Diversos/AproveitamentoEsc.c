#include <stdio.h>

int main()
{
    float m1 = 0, m2 = 0, m3 = 0, media = 0;
    int num2 = 0; 
    char resp = 's';
    
    while (resp == 's' || resp == 'S')
    {
        printf("\033[2J"); //limpa tela
        printf("\033[1;34H"); // posiciona o cursor
        printf("Aproveitamento Escolar");
        printf("\033[2;5H");
        printf("Digite a nota 1: ");
        scanf("%f", &m1);
        printf("\033[3;5H");
        printf("Digite a nota 2: ");
        scanf("%f", &m2);
        printf("\033[4;5H");
        printf("Digite a nota 3: ");
        scanf("%f", &m3);
        media = (m1 + m2 + m3) / 3;
        printf("\033[5;5H");
        printf("Digite a quantidade de faltas: ");
        scanf("%d", &num2);
    
        if(media >= 5 && num2 < 10){
            printf("\033[7;34H");
            printf("Média %.2f e faltas %d - Aprovado!", media, num2);
        }
        else{
            printf("\033[7;34H");
            printf("Média %.2f e faltas %d - Reprovado.", media, num2);
        }
        printf("\033[8;5H");
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resp);
    } 
    
    return 0;
}
