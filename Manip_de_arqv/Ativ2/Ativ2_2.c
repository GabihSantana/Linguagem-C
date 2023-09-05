#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;

int main(){
    FUNCIONARIO func;
    FILE *f;
    f = fopen("relatorio.txt", "rb");
    if(f == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    fseek(f, 2*sizeof(FUNCIONARIO), SEEK_SET);
    fread(&func, sizeof(FUNCIONARIO), 1, f);
    printf("Func ID: %d\nNome:    %s\nIdade: %4d\nSalario: %.2f\n", func.ID, func.nome, func.idade, func.salario);

    fclose(f);
    printf("\n\n\n");
    system("pause");
    return 0;
}


