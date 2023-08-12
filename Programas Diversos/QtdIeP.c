#include <stdio.h>

int main()
{
    int vet[12];
    int k;
    int imp = 0;
    int par = 0;
    int comp = sizeof(vet) / sizeof(int);
    
    //Vetor exibindo a quantidade de números Ímpares e Pares
    
    for(k = 0; k < comp; k++)
    {
        printf("\033[2J");
        printf("\033[2;34H");
        printf("Número %d: ", k + 1);
        scanf("%d", &vet[k]);
        if (vet[k] % 2 != 0){
            imp++;
        }
        else
        par++;
    }
        printf("\nQuantidade de Ímpares: %d", imp);
        printf("\nQuantidade de Pares: %d", par);
    
    return 0;
}
