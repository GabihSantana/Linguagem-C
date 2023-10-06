#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"

int main()
{
    float num1, num2;
    char op;
    char resp = 's';

    do{
        system("cls");
        printf("\nInsira o primeiro numero: ");
        scanf(" %f", &num1);
        printf("\nInsira o segundo numero: ");
        scanf(" %f", &num2);

        printf("\nInsira A - Soma, B - Subtracao), C - Multiplicacao, D - Divisao: ");
        scanf(" %c", &op);

        switch(op){
        case 'A':
        case 'a':
            soma(num1, num2);
            printf("\n\nDeseja continuar? (S/N): ");
            scanf(" %c", &resp);
            break;
        case 'B':
        case 'b':
            subtrai(num1, num2);
            printf("\n\nDeseja continuar? (S/N): ");
            scanf(" %c", &resp);
            break;
        case 'C':
        case 'c':
            multiplica(num1, num2);
            printf("\n\nDeseja continuar? (S/N): ");
            scanf(" %c", &resp);
            break;
        case 'D':
        case 'd':
            if(num2 <= 0){
                printf("\nO segundo numero deve ser maior que zero!");
                printf("\n\n");
                system("pause");
                break;
            }
            divide(num1, num2);
            printf("\n\nDeseja continuar? (S/N): ");
            scanf(" %c", &resp);
            break;
        default:
            printf("\nOperacao invalida");
            printf("\n\nDeseja continuar? (S/N): ");
            scanf(" %c", &resp);
            break;
        }
    }while (resp == 'S' || resp == 's');
    printf("\nOperação Finalizada");
}
