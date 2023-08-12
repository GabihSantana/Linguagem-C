#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char string[25];
    int k, cont = 0;
    int tamanho;
    char consoante;

    printf("\nDigite algo: ");
    fgets(string, 24, stdin);

    tamanho = strlen(string);

    printf("\nDigite uma consoante: ");
    consoante = getchar();

    for(k = 0; k < tamanho; k++){
        switch (string[k]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cont++;
                string[k] = consoante;
            break;

        default:
            break;
        }
    }
    printf("\n O número de vogais na palavra são: %d", cont);
    printf("\n Nova palavra sem vogais: %s", string);


    printf("\n\n\n");
    system("pause");
    return 0;
}

