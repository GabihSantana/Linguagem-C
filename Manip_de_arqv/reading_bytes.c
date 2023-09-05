#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    int i;
    f = fopen("vetor.txt", "rb");
    if(f == NULL) {
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }
    int total_gravado, v[10];
    //grava todo o vetor no arquivo (10 posições)
    total_gravado = fread(v, sizeof(int), 10, f);
    if(total_gravado != 10){
        printf("Erro na escrita do arquivo");
        system("pause");
        exit(1);
    }else{
        printf("Arquivo gravado com sucesso!");
    }
    printf("\n\n\n\n");
    fclose(f);
    printf("Conteudo do arquivo: ");
    for (i = 0; i < 10; i++){
        printf(" %d", v[i]);
    }
    printf("\n\n\n\n");
}
