/*
    Prot�tipos das fun��es que manipulam o dado encapsulado
    Tipo de dado que ser� armazenado na �rvore
    O ponteiro �rvore que estar� dispon�vel para o main()
*/

typedef struct NO *ArvBin; //ponteiro para a estrutura no

ArvBin *cria_arvBin();

int vazia_arvBin(ArvBin *raiz);

int altura_arvBin(ArvBin *raiz);

int totalNO_arvBin(ArvBin *raiz);

void preOrdem_arvBin(ArvBin *raiz);

void emOrdem_arvBin(ArvBin *raiz);

void posOrdem_arvBin(ArvBin *raiz);

void liberar_arvBin(ArvBin *raiz);

int insere_arvBin(ArvBin *raiz, int valor);

int consulta_arvBin(ArvBin *raiz, int valor);

int remove_arvBin(ArvBin *raiz, int valor);

void libera_NO(struct NO *no);
