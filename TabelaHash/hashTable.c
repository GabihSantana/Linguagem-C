#include <stdio.h>
#include <stdlib.h>
#include "hashTable.h"

/** Estrutura hash - Dados **/
struct hash{

    int qtd; // qtd de elemntos armazenados na tabela
    int TABLE_SIZE; //tamanho da tabela hash
    struct aluno **itens; //ponteiro para ponteiro que ir� chamar os itens - posi��o

};

/** Fun��o para criar a tabela hash **/
Hash *criaHash(int TABLE_SIZE){

    Hash *ha = (Hash*) malloc(sizeof(Hash)); // aloca mem�ria
    //Se a aloca��o foi feita com sucesso
    if(ha != NULL){
        int i;
        /* ha ir� receber o tamanho definido em main */
        ha->TABLE_SIZE = TABLE_SIZE;

        /* Alocando o array de ponteiros com o tamanho m�ximo(TABLE_SIZE) */
        ha->itens = (struct aluno**) malloc(TABLE_SIZE * sizeof(struct aluno*));

        /* Verifica a aloca��o (caso falha) */
        if(ha->itens == NULL){
            free(ha);
            return NULL;
        }
        /* qtd de elementos recebe 0 por estar vazia */
        ha->qtd = 0;

        /* Inicializando o array de ponteiros com valores NULL */
        for(i = 0; i < ha->TABLE_SIZE; i++){
            ha->itens[i] = NULL;
        }
    }
    return ha;

}

/** C�lculo de Hash: ChaveDobra **/
int chaveDobra(int chave, int TABLE_SIZE){

    int num_bits = 10;
    /* >> - desloca a direita num_bits */
    int parte1 = chave >> num_bits;
    /* & - Opera��o AND bit a bit */
    int parte2 = chave & (TABLE_SIZE - 1);
    /* ^ - opera��o XOR (ou exclusivo) */
    return (parte1 ^ parte2);

}

/** C�lculo Hash: Divis�o **/
/*
    int chaveDivisao(int chave, int TABLE_SIZE){
        return(chave & 0x7FFFFFFF) % TABLE_SIZE;
    }
*/

/** C�culo Hash: Multiplica��o **/
/*
    int chaveMultiplicacao(int chave, int TABLE_SIZE){
        float A = 0.6180339887; //constante 0 < A < 1
        float val = chave * A;
        val = val - (int) val;
        return (int) (TABLE_SIZE * val);
    }
 */

/** DuploHash - Para evitar colis�es **/
int duploHash(int H1, int chave, int i, int TABLE_SIZE){

    /* Diminui-se o tamanho da tabela e soma-se 1 � posi��o calculada) */
    int H2 = chaveDobra(chave, TABLE_SIZE - 1) + 1;
    return((H1 + i * H2) & 0x7FFFFFFF % TABLE_SIZE);

}

/** Sondagem Linear - Evita colisoes **/
/*
    int sondagemLinear(int pos, int i, int TABLE_SIZE){
        return((pos + i) & 0x7FFFFFFF) % TABLE_SIZE;
    }
*/

/** Sondagem quadr�tica **/
/*
    int sondagemQuadratica(int pos, int i, int TABLE_SIZE){
        pos = pos + 2 * i + 5 * i * i;
        return(pos & 0x7FFFFFFF) & TABLE_SIZE);
    }
*/

/** Inser��o na tabela **/
int insereHash_enderecoAberto(Hash *ha, struct aluno al){

    //Verifica se a aloca��o est� certa ou se est� cheia
    if(ha == NULL || ha->qtd == ha->TABLE_SIZE){
        return 0;
    }
    /* Define a chave que ser� utilizada */
    int chave = al.matricula;
    //int chave = valorString(al.nome);

    int i, pos, newPos;

    /* chama a fun��o para calcular a posi��o do elemento */
    pos = chaveDobra(chave, ha->TABLE_SIZE);
    //pos = chaveMultiplicacao(chave, ha->TABLE_SIZE);
    //pos = chaveDivisao(chave, ha->TABLE_SIZE);

    /* chama a fun��o para evitar colis�o */
    for(i = 0; i < ha->TABLE_SIZE; i++){
        newPos = duploHash(pos, chave, i, ha->TABLE_SIZE);
        //newPos = sondagemLinear(pos, i, ha->TABLE_SIZE);
        //newPost = sondagemQuadratica(pos, i, ha->TABLE_SIZE);

        /* Verifica se a posi��o est� vazia, e se tiver, insere o aluno */
        if(ha->itens[newPos] == NULL){
            struct aluno *novo;
            novo = (struct aluno*) malloc(sizeof(struct aluno));

            /* Se n�o for possivel alocar */
            if(novo == NULL){
                return 0;
            }
            /* Se n�o for nulo, insere o aluno */
            *novo = al;
            ha->itens[newPos] = novo;
            ha->qtd++;
            return 1;
        }
    }
    return 0;

}

/** Busca Hash **/
int buscaHash_enderecoAberto(Hash *ha, int mat, struct aluno *al){
    /* */
    if(ha == NULL){
        return 0;
    }

    int i, pos, newPos;
    /* calcula a posi��o do item a partir da chave inserida */
    pos = chaveDobra(mat, ha->TABLE_SIZE);

    /* calcula outra posi��o que evita a colis�o */
    for(i = 0; i < ha->TABLE_SIZE; i++){
        newPos = duploHash(pos, mat, i, ha->TABLE_SIZE);

        /* caso a posi��o calculada que evita a colis�o n�o for encontrada retorna 0 */
        if(ha->itens[newPos] == NULL){
            return 0;
        }
        /* caso os valores combinem retorna 1 */
        if(ha->itens[newPos]->matricula == mat){
            *al = *(ha->itens[newPos]);
            return 1;
        }
    }
    //caso contr�rio, 0 - n�o foi encontrado
    return 0;
}

/** Libera a mem�ria alocada ao final do programa **/
void liberaHash(Hash *ha){

    /* Verifica se a tabela est� vazia: */
    if(ha != NULL){
        int i;
        /* for inicializado para percorrer toda a tabela */
        for(i = 0; i < ha->TABLE_SIZE; i++){
            /* caso itens[i] n�o for nulo, o item ser� liberado */
            if(ha->itens[i] != NULL){
                free(ha->itens[i]);
            }
        }
        free(ha->itens);
        free(ha);
    }

}
