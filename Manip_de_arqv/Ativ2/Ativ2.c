#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;

FUNCIONARIO dados();

int main(){
    int i, tam = 5;
    int total;
    FUNCIONARIO func[tam];

    for(i = 0; i < tam; i++){
        printf("Funcionario %d:\n", i + 1);
        func[i] = dados();
    }

    FILE *relatorio;
    relatorio = fopen("relatorio.txt", "wb");

    if(relatorio == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    total = fwrite(func, sizeof(FUNCIONARIO), tam, relatorio);

    if(total != tam){
        printf("Erro na escrita do arquivo!\n");
        system("pause");
        exit(1);
    }
    else{
        printf("Arquivo gravado com sucesso!");
    }

    fclose(relatorio);
    printf("\n\n\n");
    system("pause");
    return 0;
}

FUNCIONARIO dados(){
    FUNCIONARIO func;
        printf("\nDigite o ID: ");
        scanf(" %d", &func.ID);
        getchar(); //remove o \n

        printf("\nDigite o nome: ");
        fgets(func.nome, 30, stdin);
        func.nome[strlen(func.nome) - 1] = '\0'; //altera o \n para \0

        printf("\nDigite a idade: ");
        scanf(" %d", &func.idade);

        printf("\nDigite o salario: ");
        scanf(" %f", &func.salario);

        system("pause");
        system("cls"); //limpa a tela

        return func;
}
