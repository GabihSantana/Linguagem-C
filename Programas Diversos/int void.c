#include <stdio.h>

int somar(int, int);
void limpar(void);
int main()
{
    int num1, num2, result; // argumentos reais > quando chama
    limpar();
    printf("Número 1: ");
    scanf("%d", &num1);
    printf("Número 2: ");
    scanf("%d", &num2);
    result = somar(num1, num2);
    printf("Total: %d", result);
    return 0;
}
void limpar() 
{
    printf("\033[2J");
    printf("\t\tFunção - adição de 2 números\n");
}
int somar(int n1, int n2)
{
    return n1 + n2; // nenhum código após return é exibido, gasta menos memória do que se fosse: 
}

//se fosse: Ocuparia mais memória nessa parte final de return the value 
/*int somar(int n1, int n2)
{
    int res; // n1 e n2 são variáveis locais // argumentos formais > na definição 
    res = n1 + n2;
    return res; 
}*/ 
