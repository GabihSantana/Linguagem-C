int main()
{
    int num1 = 0;
    int num2 = 0;
    int resul = 0;
    float z = 0;
    char resp = 's';
    char op;
    
    while (resp == 'S' || resp == 's')
    {
        printf("\033[2J");
        printf("\033[1;34H");
        printf("Calculadora\n\n");
        printf("\033[3;9H");
        printf("Número 1: ");
        scanf("%d", &num1);
        printf("\033[4;9H");
        printf("Número 2: ");
        scanf("%d", &num2);
        printf("\033[5;3H");
        printf("Selecione uma operação: ");
        scanf(" %c", &op);
        
        switch (op){
            case '-':
            resul = num1 - num2;
            printf("\033[7;5H");
            printf("Resultado: %d", resul);
            printf("\033[8;9H");
            printf("Deseja continuar? (S/N): ");
            scanf(" %c", &resp);
            break;
            
            case '+':
            resul = num1 + num2;
            printf("\033[7;5H");
            printf("Resultado: %d", resul);
            printf("\033[8;9H");
            printf("Deseja continuar? (S/N): ");
            scanf(" %c", &resp);
            break;
            
            case '*':
            case 'x': 
            resul = num1 * num2;
            printf("\033[7;5H");
            printf("Resultado: %d", resul);
            printf("\033[8;9H");
            printf("Deseja continuar? (S/N): ");
            scanf(" %c", &resp);
            break;
            
            case '/':
            if (num2 == 0){
                printf("\033[8;5H");
                printf("Número inválido");
            }
            else{
                 z = (float) num1 / (float) num2;
                printf("\033[7;5H");
                printf("Resultado: %.2f", z);
                printf("\033[8;9H");
                printf("Deseja continuar? (S/N): ");
                scanf(" %c", &resp);  
                break;
            }
            default:
            printf("\033[7;5H");
            printf ("Erro");
            printf("\033[9;9H");
            printf("Deseja continuar? (S/N): ");
            scanf(" %c", &resp);
            break;
        }
    }
            
    return 0;
}
