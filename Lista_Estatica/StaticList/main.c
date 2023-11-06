#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaSequencial.h"

int main()
{
    int x, i, mat = 110, posicao = 1;
    Lista *li;
    struct aluno al, al2, al3, b, dados_aluno;

    li = cria_lista();

    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula = 110;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

    //verificar se a lista está cheia para ocorrer a implementação
    x = lista_cheia(li);
    if(x){
        printf("\nLista cheia!");
    }else{
        printf("\nLista nao esta cheia!");
    }

    //inserir  um al no início da lista:
    x = insere_lista_inicio(li, al);
    if(x){
        printf("\nAluno inserido com sucesso!");
    }else{
        printf("\nErro - Aluno nao inserido!");
    }

    //inserir o al2 no final da lista
    x = insere_lista_final(li, al2);
    if(x){
        printf("\nAluno inserido com sucesso!");
    }
    else{
        printf("\nErro - Aluno nao inserio!");
    }

    x = insere_lista_ordenada(li, al3);
    if(x){
        printf("\nAluno inserido na posicao com sucesso!");
    }else{
        printf("\nErro - Aluno nao inserido!");
    }

    for(i = 0; i < 10; i++){
        x = lista_cheia(li);
        if(x){
            printf("\nLista cheia!");
            break;
        }else{
            printf("\nLista nao esta cheia!");
        }
        printf("\nInsira os dados do aluno %d: ", i + 1);
        b = coleta_dados(li);
        system("cls");
        x = insere_lista_ordenada(li, b);
        if(x){
            printf("\nAluno inserido com sucesso!");
        }else{
            printf("\nErro - Aluno nao inserido!");
        }
    }

    //verificar se a lista está vazia
    x = lista_vazia(li);
    if(x){
        printf("\nLista esta vazia!");
    }else{
        printf("\nLista nao esta vazia!");
    }

    //Busca por posição:
    x = consulta_lista_pos(li, posicao, &dados_aluno);
    if(x){
        printf("\nConsulta por posicao realizada com sucesso!");
        printf("\nMatricula: %d", dados_aluno.matricula);
        printf("\nNota 1: %.2f", dados_aluno.n1);
        printf("\nNota 2: %.2f", dados_aluno.n2);
        printf("\nNota 3: %.2f", dados_aluno.n3);
    }else{
        printf("\nNao foi possivel consultar na posicao especificada!");
    }

    //buscar por conteúdo:
    x = consulta_lista_mat(li, mat, &dados_aluno);
    if(x){
        printf("\nConsulta por matricula realizada com sucesso!");
        printf("\nMatricula: %d", dados_aluno.matricula);
        printf("\nNota 1: %.2f", dados_aluno.n1);
        printf("\nNota 2: %.2f", dados_aluno.n2);
        printf("\nNota 3: %.2f", dados_aluno.n3);
    }else{
        printf("\nNao foi possivel consultar na posicao especificada!");
    }

    //remoção no final:
    x = remove_lista_final(li);
    if(x){
        printf("\nAluno removido no final com sucesso!");
    }else{
    printf("\nErro - Aluno nao removido!");
    }

    //remoção no começo:
    x = remove_lista_inicio(li);
    if(x){
        printf("\nAluno removido do inicio!");
    }else{
        printf("\nErro - Aluno nao removido");
    }

    //remoção de um elemento qualquer (com deslocamento)
    x = remove_lista(li, mat);
    if(x){
        printf("\nAluno removido na posicao especifica com sucesso!");
    }else{
        printf("\nErro - Aluno nao removido na posicao especifica!");
    }


    //verificar o tamanho da lista
    x = tamanho_lista(li);
    printf("\nTamanho da lista e: %d", x);


    //liberar a memória armazenada para a lista
    libera_lista(li);
}
