#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char texto[100];
    int i;

    FILE *f1, *f2;
    f1 = fopen("arq1.txt", "w"); //abrindo o arq txt
    //verificando se conseguiu realizar a abertura
    if (f1 == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    //lendo algo do teclado
    printf("Digite algo: ");
    fgets(texto, sizeof(texto) - 1, stdin);

    //salvando caractere por caractere no arquivo
    for(i = 0; i < strlen(texto); i++){
        fputc(texto[i], f1);
    }
    fclose(f1); //salvar o que foi digitado no arquivo

    f1 = fopen("arq1.txt", "r"); //abrindo agora como modo leitura
    f2 = fopen("arq2.txt", "w");

    if (f1 == NULL || f2 == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }
    char letters = fgetc(f1); //pegando os caracteres presentes no arquivo

    while(letters != EOF){ //verificando se não é o End of file
        fputc(toupper(letters), f2); //Colocando as letras em caixa alta e salvando no arquivo f2
        letters = fgetc(f1);
    }
    fclose(f1);
    fclose(f2); //fechando para salvar os dados no arquivo

    f1 = fopen("arq1.txt", "r");
    f2 = fopen("arq2.txt", "r"); //abrindo em modo leitura para printar na tela

    char j = fgetc(f1);
    char k = fgetc(f2);

    printf("\nTexto digitado: \n");
    while(j != EOF){
         printf("%c", j);
        j = fgetc(f1);
    }
    printf("\n\nTexto em Caixa alta:\n ");
    fclose(f1);

    while(k != EOF){
        printf("%c", k);
        k = fgetc(f2);
    }
    printf("\n\n\n");
    fclose(f2);
    system("pause");
    return 0;
}
