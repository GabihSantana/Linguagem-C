#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "controls.h"
#include "hashTable.h"

int opcMenu(){
    int op;
    printf("\n\t===================================================\n ");
    printf("\n\tSelecione uma execucao: \n");
    printf("\n\t1 - Insercao com tratamento de colisao");
    printf("\n\n\t=================================================== ");
    printf("\n\nSelecione: ");
    scanf(" %d", &op);

    return op;
}

int continuar(){
    int op;
    printf("\n\n\tDeseja Continuar a Operacao?");
    printf("\n\t\t1 - Sim");
    printf("\n\t\t2 - Nao");
    printf("\n\n\tInsira: ");
    scanf(" %d", &op);

    return op;
}

int menuOperacoes(){
    int operacao;
    printf("\n\t===================================================\n ");
    printf("\n\tSelecione uma operacao: \n");
    printf("\n\t1 - Inserir um novo aluno");
    printf("\n\t2 - Buscar um aluno");
    printf("\n\n\t=================================================== ");
    printf("\n\nSelecione: ");
    scanf(" %d", &operacao);

    return operacao;
}

ALUNO insereAluno(){
    ALUNO al;
    printf("\nInsira o numero de matricula do aluno: ");
    scanf(" %d", &al.matricula);

    getchar();
    printf("\nInsira o nome do aluno: ");
    fgets(al.nome, 39, stdin);
    //transformando o \n em nulo:
    al.nome[strlen(al.nome)-1] = '\0';

    printf("\nInsira a nota 1: ");
    scanf(" %f", &al.n1);

    printf("\nInsira a nota 2: ");
    scanf(" %f", &al.n2);

    printf("\nInsira a nota 3: ");
    scanf(" %f", &al.n3);

    return al;
}
