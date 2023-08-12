#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char palavra[25];
    int k;
    int tamanho = 0;

    printf("Digite algo: ");
    fgets(palavra, 24, stdin);
    tamanho = strlen(palavra);

    for(k = 0; k < tamanho; k++){
        if(palavra[k] >= 97 && palavra[k] <= 122){
            palavra[k] -= 32;
        }
    }
    printf("\nPalavra em letra maiúscula: %s", palavra);

    printf("\n\n\n");
    system("pause");
    return 0;
}




