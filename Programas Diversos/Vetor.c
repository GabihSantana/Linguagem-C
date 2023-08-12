#include <stdio.h>

int main()
{
        int numeros [4] = {1, 4, 88, 45};
        int k;
        int soma = 0;
        
        for (k = 0; k < 4; k++)
            {
                printf("%d ", numeros[k]);
            }
        soma = numeros[0] + numeros[3];
        printf("\nSoma: %d", soma);

            
    return 0;
} 
