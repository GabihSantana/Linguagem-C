#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    f = fopen("vetor.txt", "wb");
    if(f == NULL) {
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }
    int total_gravado, v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //grava todo o vetor no arquivo (10 posições)
    total_gravado = fwrite(v, sizeof(int), 10, f);
    if(total_gravado != 10){
        printf("Erro na escrita do arquivo");
        system("pause");
        exit(1);
    }else{
        printf("Arquivo gravado com sucesso!");
    }
    printf("\n\n\n\n");
    fclose(f);

}
