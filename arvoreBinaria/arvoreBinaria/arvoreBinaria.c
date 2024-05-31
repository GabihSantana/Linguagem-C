#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

struct NO{
    int info;
    struct NO *esq;
    struct NO *dir;
};

ArvBin *cria_arvBin(){
    ArvBin *raiz = (ArvBin*) malloc(sizeof(ArvBin));
    if(raiz != NULL){
        *raiz = NULL;
    }
    return raiz;
}

/** Verificar se a árvore está vazia **/
int vazia_arvBin(ArvBin *raiz){
    if(raiz == NULL){
        return 1;
    }
    if(*raiz == NULL){
        return 1;
    }
    return 0;
}

/** Verificar a altura da árvore **/
int altura_arvBin(ArvBin *raiz){
    /*if(raiz == NULL){
        return 0;
    }
    if(*raiz == NULL){
        return 0;
    }*/
    if(vazia_arvBin(raiz)){
        return 0;
    }

    int alt_esq = altura_arvBin(&((*raiz)->esq));
    int alt_dir = altura_arvBin(&((*raiz)->dir));
    if(alt_esq > alt_dir){
        return(alt_esq + 1);
    }else{
        return(alt_dir + 1);
    }
}

/** NÚMERO TOTAL DE NÓS **/
int totalNO_arvBin(ArvBin *raiz){
    if(vazia_arvBin(raiz)){
        return 0;
    }
    int alt_esq = totalNO_arvBin(&((*raiz)->esq));
    int alt_dir = totalNO_arvBin(&((*raiz)->dir));
    return(alt_esq + alt_dir + 1);
}

/** PERCORRENDO ÁRVORE BINÁRIA **/
/* Pré-ordem, Em-ordem, Pós-ordem */
/** Pré-Ordem **/
void preOrdem_arvBin(ArvBin *raiz){
    if(*raiz != NULL){
        printf("%d\n", (*raiz)->info);
        preOrdem_arvBin(&((*raiz)->esq));
        preOrdem_arvBin(&((*raiz)->dir));
    }else{
        return;
    }
}

/** Em-Ordem **/
void emOrdem_arvBin(ArvBin *raiz){
    if(*raiz != NULL){
        emOrdem_arvBin(&((*raiz)->esq));
        printf("%d\n", (*raiz)->info);
        emOrdem_arvBin(&((*raiz)->dir));
    }else{
        return;
    }
}

/** Pós-Ordem **/
void posOrdem_arvBin(ArvBin *raiz){
    if(*raiz != NULL){
        posOrdem_arvBin(&((*raiz)->esq));
        posOrdem_arvBin(&((*raiz)->dir));
        printf("%d\n", (*raiz)->info);
    }else{
        return;
    }
}

/** Inserção na Árvore Binária **/
int insere_arvBin(ArvBin *raiz, int valor){
    if(raiz == NULL){
        return 0;
    }
    struct NO *novo;
    novo = (struct NO*) malloc(sizeof(struct NO));
    if(novo == NULL){
        return 0;
    }
    //sempre um novo nó será inserido como folha
    novo->info = valor; //info -> valor tipo int
    novo->dir = NULL;
    novo->esq = NULL;
    //caso a árvore for vazia, será inserido no primeiro nó
    if(*raiz == NULL){
        *raiz = novo;
    }else{
        struct NO *atual = *raiz;
        struct NO *ant = NULL;
        while(atual != NULL){
            ant = atual; //armazena o nó antes dele mudar
            if(valor == atual->info){
                free(novo);
                return 0;
            }
            //quando o atual receber NULL, ele chegou na folha
            if(valor > atual->info){
                atual = atual->dir;
            }else{
                atual = atual->esq;
            }
        }
        //Insere o novo nó como filho desse nó folha encotrado
        if(valor > ant->info){
            ant->dir = novo;
        }else{
            ant->esq = novo;
        }
    }
    return 1;
}

/** CONSULTA **/
int consulta_arvBin(ArvBin *raiz, int valor){
    if(raiz == NULL){
        return 0;
    }
    struct NO *atual = *raiz;
    while(atual != NULL){ //se chegar a NULL, toda árvore foi percorrida e o elemento não foi encontrado
        if(valor == atual->info){
            return 1;
        }
        if(valor > atual-> info){
            atual = atual->dir;
        }else{
            atual = atual->esq;
        }
    }
    return 0;
}

/** REMOÇÃO **/
struct NO *remove_atual(struct NO *atual){
    struct NO *no1, *no2;
    if(atual->esq == NULL){
        no2 = atual->dir;
        free(atual);
        return no2;
    }
    no1 = atual;
    no2 = atual->esq;
    while(no2->dir != NULL){
        no1 = no2;
        no2 = no2->dir;
    }
    if(no1 != atual){
        no1->dir = no2->esq;
        no2->esq = atual->esq;
    }
    no2->dir = atual->dir;
    free(atual);
    return no2;
}

int remove_arvBin(ArvBin *raiz, int valor){
    if(raiz == NULL){
        return 0;
    }
    struct NO *ant = NULL;
    struct NO *atual = *raiz;
    while(atual != NULL){
        if(valor == atual->info){
            if(atual == *raiz){
                *raiz = remove_atual(atual);
            }else{
                if(ant->dir == atual){
                    ant->dir = remove_atual(atual);
                }else{
                    ant->esq = remove_atual(atual);
                }
            }
            return 1;
        }
        ant = atual;
        if(valor > atual->info){
            atual = atual->dir;
        }else{
            atual = atual->esq;
        }
    }
}


/** Liberar da Memória **/
void liberar_arvBin(ArvBin *raiz){
    if(raiz == NULL){
        return;
    }
    libera_NO(*raiz);
    free(raiz);
}

void libera_NO(struct NO *no){
    if(no == NULL){
        return;
    }
    libera_NO(no->esq);
    libera_NO(no->dir);
    free(no);
    no = NULL;
}


