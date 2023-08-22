<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario {
    int id;
    char nome[31];
    int idade;
    float salario;
}FUNCIONARIO;

FUNCIONARIO dados(); //stdin

void imprimir(FUNCIONARIO func[], int tam); //imprimir na tela, parametros de vetor e tamanho desse vetor
void reajuste(float *func_salario); //add 10%
void rel_salario_corrigido(FUNCIONARIO func[], int tam); //print w/ additional

int main(){
    int i, tam = 5;
    FUNCIONARIO func[tam];

    for(i = 0; i < tam; i++){
        func[i] = dados();
    }

    printf("\n========== Relatorio ==========\n");
    imprimir(func, tam);//function to print on screen
    printf("=================================");

    for(i = 0; i < tam; i++){
        reajuste(&func[i].salario); //cada func[i], o salario reajustado 10% ~utilização de ponteiros para modificar valores
    }

    printf("\n\n============ REAJUSTE SALARIO =============\n");
    rel_salario_corrigido(func, tam); //função para imprimir na tela
    printf("===============================================");


    printf("\n\n\n");
    system("pause");
    return 0;
}

FUNCIONARIO dados(){
    FUNCIONARIO func;
        printf("\nDigite o ID: ");
        scanf(" %d", &func.id);
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

void imprimir(FUNCIONARIO func[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("\nDados do funcionario %d:\n", i + 1);
        printf("\nID: %d", func[i].id);
        printf("\nNome: %s", func[i].nome);
        printf("\nIdade: %d", func[i].idade);
        printf("\nSalario: R$%.2f", func[i].salario);
        printf("\n\n");
    }
}

void reajuste(float *func_salario){ //ponteiro
    *func_salario = *func_salario + (*func_salario * 0.10);
}

void rel_salario_corrigido(FUNCIONARIO func[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("\nNome: %s", func[i].nome);
        printf("\nSalario: R$%.2f", func[i].salario);
        printf("\n\n");
    }
}

=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario {
    int id;
    char nome[31];
    int idade;
    float salario;
}FUNCIONARIO;

FUNCIONARIO dados(); //stdin

void imprimir(FUNCIONARIO func[], int tam); //imprimir na tela, parametros de vetor e tamanho desse vetor
void reajuste(float *func_salario); //add 10%
void rel_salario_corrigido(FUNCIONARIO func[], int tam); //print w/ additional

int main(){
    int i, tam = 5;
    FUNCIONARIO func[tam];

    for(i = 0; i < tam; i++){
        func[i] = dados();
    }

    printf("\n========== Relatorio ==========\n");
    imprimir(func, tam);//function to print on screen
    printf("=================================");

    for(i = 0; i < tam; i++){
        reajuste(&func[i].salario); //cada func[i], o salario reajustado 10% ~utilização de ponteiros para modificar valores
    }

    printf("\n\n============ REAJUSTE SALARIO =============\n");
    rel_salario_corrigido(func, tam); //função para imprimir na tela
    printf("===============================================");


    printf("\n\n\n");
    system("pause");
    return 0;
}

FUNCIONARIO dados(){
    FUNCIONARIO func;
        printf("\nDigite o ID: ");
        scanf(" %d", &func.id);
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

void imprimir(FUNCIONARIO func[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("\nDados do funcionario %d:\n", i + 1);
        printf("\nID: %d", func[i].id);
        printf("\nNome: %s", func[i].nome);
        printf("\nIdade: %d", func[i].idade);
        printf("\nSalario: R$%.2f", func[i].salario);
        printf("\n\n");
    }
}

void reajuste(float *func_salario){ //ponteiro
    *func_salario = *func_salario + (*func_salario * 0.10);
}

void rel_salario_corrigido(FUNCIONARIO func[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("\nNome: %s", func[i].nome);
        printf("\nSalario: R$%.2f", func[i].salario);
        printf("\n\n");
    }
}

>>>>>>> c14c827fce0cd10840f2ba3cc712c26d64684265
