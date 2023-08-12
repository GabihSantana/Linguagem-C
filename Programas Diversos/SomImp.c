#include <stdio.h>

int main()
{
    int vet[20];
    int k;
    int j = 0;
    int soma = 0;
    int comp = sizeof(vet) / sizeof(int);
    
    //Vetor somador de números Ímpares
    
    for(k = 0; k < comp; k++){
        vet[k] = ++j;
        if (vet[k] % 2 != 0){
            printf("%d ", vet[k]);
            soma = soma + vet[k];
        }
    }
            printf("\nSoma: %d ", soma);

    return 0;
}
