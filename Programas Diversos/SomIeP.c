#include <stdio.h>

int main()
{
    int vet[11];
    int k;
    int j = -2; // Ímpar: -1;
    int soma = 0;
    int comp = sizeof(vet) / sizeof(int);
    
    //Vetor Somador de Números Pares ou Ímpares
    
    for(k = 0; k < comp; k++){
        j = j + 2;
        vet[k] = j;
        printf("%d ", vet[k]);
        soma = soma + vet[k];
    }
        printf("\nSoma: %d ", soma);

    return 0;
}
