#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *f;
    f = fopen("arquivo.txt", "r");
    if (f == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }
    char c = fgetc(f);
    int i;
    //gravando a string, caractere a caractere
    while(!feof(f)){
        printf("%c", c);
        c = fgetc(f);
    }
    printf("\n\n\n");
    fclose(f);
    system("pause");
    return 0;
}
