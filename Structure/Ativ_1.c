<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
    int id;
    char nome[31];
    int idade;
    float salario;
};

int main(){
    int i, tam = 5;
    struct funcionario f[tam];

    for(i = 0; i < tam; i++){
        printf("\nInforme os dados do funcionario %d:", i + 1);
        printf("\nDigite o ID: ");
        scanf(" %d", &f[i].id);
        getchar(); //remove o \n

        printf("\nDigite o nome: ");
        fgets(f[i].nome, 30, stdin);
        f[i].nome[strlen(f[i].nome) - 1] = '\0'; //altera o \n para \0

        printf("\nDigite a idade: ");
        scanf(" %d", &f[i].idade);

        printf("\nDigite o salario: ");
        scanf(" %f", &f[i].salario);

        system("pause");
        system("cls"); //limpa tela
    }
    printf("\n========== Relatorio ==========\n");
    for(i = 0; i < tam; i++){
        printf("\nDados do funcionario %d:\n", i + 1);
        printf("\nID: %d", f[i].id);
        printf("\nNome: %s", f[i].nome);
        printf("\nIdade: %d", f[i].idade);
        printf("\nSalario: R$%.2f", f[i].salario);
        printf("\n\n");
    }
    printf("=================================");
    printf("\n\n\n");
    system("pause");
    return 0;
}

=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
    int id;
    char nome[31];
    int idade;
    float salario;
};

int main(){
    int i, tam = 5;
    struct funcionario f[tam];

    for(i = 0; i < tam; i++){
        printf("\nInforme os dados do funcionario %d:", i + 1);
        printf("\nDigite o ID: ");
        scanf(" %d", &f[i].id);
        getchar(); //remove o \n

        printf("\nDigite o nome: ");
        fgets(f[i].nome, 30, stdin);
        f[i].nome[strlen(f[i].nome) - 1] = '\0'; //altera o \n para \0

        printf("\nDigite a idade: ");
        scanf(" %d", &f[i].idade);

        printf("\nDigite o salario: ");
        scanf(" %f", &f[i].salario);

        system("pause");
        system("cls"); //limpa tela
    }
    printf("\n========== Relatorio ==========\n");
    for(i = 0; i < tam; i++){
        printf("\nDados do funcionario %d:\n", i + 1);
        printf("\nID: %d", f[i].id);
        printf("\nNome: %s", f[i].nome);
        printf("\nIdade: %d", f[i].idade);
        printf("\nSalario: R$%.2f", f[i].salario);
        printf("\n\n");
    }
    printf("=================================");
    printf("\n\n\n");
    system("pause");
    return 0;
}

>>>>>>> c14c827fce0cd10840f2ba3cc712c26d64684265
