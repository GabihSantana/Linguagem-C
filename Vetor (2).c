#include <stdio.h>

int main()
{
    int vetor[10];
    int k;
    int x = 1;
    
    for (k = 0; k < 10; k++) // da p usar o int comp = sizeof(vetor) / 4  tbm, ao invés de declarar < 10
    {
        vetor[k] = x++;
        printf("%d ", vetor[k]);
    }
    
    printf("\n\n");
    
    k = 0;
    x = 1;
    while (k < 10)
    {
        vetor[k] = x++;
        printf("%d ", vetor[k]);
        k++;
    }
    
    return 0;
}
