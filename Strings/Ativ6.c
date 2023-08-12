#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

char *strupr(char *str);
char *strlwr(char *str);

int main() {
    setlocale(LC_ALL, "Portuguese");

    char palavra[25];
    int k;
    int tamanho = 0;

    printf("Digite algo: ");
    fgets(palavra, 24, stdin);
    tamanho = strlen(palavra);

    for(k = 0; k < tamanho; k++){
        if(islower(palavra[k])){
            palavra[k] = toupper(palavra[k]);
        }
        else{
            palavra[k] = tolower(palavra[k]);
        }
    }
    printf("\nPalavra com caixa invertida: %s", palavra);
    strupr(palavra);
    printf("\nPalavra com caixa alta: %s", palavra);
    strlwr(palavra);
    printf("\nPalavra com caixa baixa: %s", palavra);

    printf("\n\n\n");
    system("pause");
    return 0;
}

char *strupr(char *str){
    while(*str){
        *str = toupper(*str);
        str++;
    }
    return str;
}

char *strlwr(char *str){
    while(*str){
        *str = tolower(*str);
        str++;
    }
    return str;
}

