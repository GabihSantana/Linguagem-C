#include <stdio.h>

int main()
{
    float sal = 0;
    float imp = 0;
    float inss = 0;
    float desc = 0;
    float liq = 0;
    char resp = 's';

    do{
        printf("\033[2J");
        printf("\033[1;34H");
        printf("Salário Líquido\n\n");
        printf("\033[3;9H");
        printf("Salário Bruto: ");
        scanf("%f", &sal);
        
        if (sal >= 1000.00) {
            imp = sal * 0.1;
            printf("\033[5;9H");
            printf("Imposto sobre a renda: %.2f", imp);
        }
        else {
            imp = sal * 0.05;
            printf("\033[5;9H");
            printf("Imposto sobre a renda: %.2f", imp);
        }
        
        inss = 0.14 * sal;
        desc = imp + inss;
        liq = sal - desc;
        
        printf("\033[6;9H");
        printf("INSS: %.2f\n", inss);
        printf("\033[7;9H");
        printf("Descontos: %.2f\n", desc);
        printf("\033[9;9H");
        printf("Salário líquido: %.2f\n", liq);
        printf("\033[11;9H");
        printf("Novo processamento? (S/N): ");
        scanf(" %c", &resp);
        
    }while (resp == 'S' || resp == 's');
        printf("\033[12;9H");
        printf("Processamento encerrado");
        
    return 0;
}
