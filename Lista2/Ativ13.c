#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cadastro{
    char nome[30];
    int idade;
    char end[100];
}CADASTRO;

int func(int n);

CADASTRO dados();

void relatorio(CADASTRO dados);

int main(){
    int n, i;
    CADASTRO *p_vet = NULL;

    n = func(n);
    p_vet = (CADASTRO*) calloc(n, sizeof(CADASTRO));

    if(p_vet == NULL){
        printf("ERRO - Sem Memoria!");
        exit(1);
    }

    for(i = 0; i < n; i++){
        p_vet[i] = dados();
    }

    system("cls");

    printf("\n====== Relatorio: ======\n");
    for(i = 0; i < n; i++){
        printf("\n\nDados de %d:", i + 1);
        relatorio(p_vet[i]);
    }

    free(p_vet);

    printf("\n\n\n");
    system("pause");
    return 0;
}

int func(int n){
    do{
        printf("\nInsira a quantidade: ");
        scanf("%d", &n);
    }while (n <= 0);
    return n;
}

CADASTRO dados(){
    CADASTRO dados;

    printf("\nInsira o nome: ");
    getchar();
    fgets(dados.nome, 29, stdin);
    dados.nome[strlen(dados.nome) - 1] = '\0';

    printf("\nInsira a idade: ");
    scanf(" %d", &dados.idade);

    getchar();
    printf("\nInsira o endereco: ");
    fgets(dados.end, 99, stdin);
    dados.end[strlen(dados.end) - 1] = '\0';

    return dados;
}

void relatorio(CADASTRO dados){
    printf("\nNome: %s", dados.nome);
    printf("\nIdade: %d", dados.idade);
    printf("\nEndereco: %s", dados.end);

}

