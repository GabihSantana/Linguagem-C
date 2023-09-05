#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f;
    f = fopen("aqr_strgr.txt", "w");
    if(f == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }
    char texto[90];
    printf("\nDigite algo: ");
    fgets(texto, 89, stdin);
    int retorno = fputs(texto, f);
    if(retorno == EOF){
        printf("Erro na gravação!\n");
    }
    fclose(f);

    char str[30];
    f = fopen("aqr_strgr.txt", "r");
    char *resultado = fgets(str, 89, f);
    if(resultado == NULL){
        printf("Erro na leitura\n");
    }
    else{
        printf("%s", str);
    }

    fclose(f);
    system("pause");
    return 0;
}
