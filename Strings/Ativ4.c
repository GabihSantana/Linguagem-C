#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

char *strlwr(char *str);

int main() {
    setlocale(LC_ALL, "Portuguese");

    char palavra1[20];
    char palavra2[20];

    printf("Digite algo: ");
    gets(palavra1);
    printf("Digite algo novamente: ");
    gets(palavra2);

    strlwr(palavra1);
    strlwr(palavra2);

    if(strstr(palavra1, palavra2)){
        printf("\n\nA string \"%s\" está na palavra \"%s\"", palavra2, palavra1);
    }
    else
        if(strstr(palavra2, palavra1)){
            printf("\n\nA string \"%s\" está na palavra \"%s\"", palavra1, palavra2);
    }
    else{
        printf("\nAs palavras não estão contidas");
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}

char *strlwr(char *str){
    while(*str){
        *str = tolower(*str);
        str++;
    }
    return str;
}





