#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;

    printf("Insira uma letra minuscula: ");
    scanf(" %c", &letra);

    letra -= 32;

    printf("\nLetra em maiusculo: %c", letra);

    printf("\n\n\n");
    system("pause");
    return 0;
}

