#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
}ALUNO;

ALUNO dados();

void maiorMedia(ALUNO vet[], int tam);

int main(){
    int qntd, i;

    printf("\nInsira a quantidade de alunos: ");
    scanf(" %d", &qntd);

    ALUNO alunos[qntd];
    system("cls");

    for(i = 0; i < qntd; i++){
        alunos[i] = dados();
    }
    system("cls");

    for(i = 0; i < qntd; i++){
        printf("\n\nALUNO %d: ", i + 1);
        printf("\nMatricula: %d ", alunos[i].matricula);
        printf("\nNome: %s", alunos[i].nome);
    }

    maiorMedia(alunos, qntd);

    printf("\n\n\n");
    system("pause");
    return 0;
}

ALUNO dados(){
    ALUNO Info;
    printf("\nInsira o numero da matricula: ");
    scanf( "%d", &Info.matricula);
    getchar(); //remove o \n (enter)

    printf("\nInsira o nome do aluno: ");
    fgets(Info.nome, 29, stdin);
    Info.nome[strlen(Info.nome) - 1] = '\0'; //altera o \n para \0

    printf("\nInsira a nota da prova 1 do aluno: ");
    scanf( "%f", &Info.nota1);

    printf("\nInsira a nota da prova 2 do aluno: ");
    scanf( "%f", &Info.nota2);

    printf("\nInsira a nota da prova 3 do aluno: ");
    scanf( "%f", &Info.nota3);

    //retornar os dados de i inseridos
    return Info;
}

void maiorMedia(ALUNO vet[], int tam){
    int i;
    float media[tam];
    //calcular a media
    for (i = 0; i < tam; i++) {
        media[i] = (vet[i].nota1 + vet[i].nota2 + vet[i].nota3) / 3.0;
    }
    //verificar qual é a maior
    float maiorMedia = media[0];
    int numAluno = 0;

    for (i = 1; i < tam; i++) {
        if(media[i] > maiorMedia) {
            maiorMedia = media[i];
            numAluno = i;
        }
    }
    printf("\n\nA maior media e do aluno %d, com %.2f", numAluno + 1, maiorMedia);
}
