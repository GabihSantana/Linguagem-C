#define MAX 100

//dado que será guardado dentro da lista:
struct aluno{
    int matricula;
    float n1, n2, n3;
};

typedef struct lista Lista;

Lista *cria_lista();

int lista_cheia(Lista *li);

int tamanho_lista(Lista *li);

int insere_lista_final(Lista *li, struct aluno al);

int insere_lista_inicio(Lista *li, struct aluno al);

int insere_lista_ordenada(Lista *li, struct aluno al);

int lista_vazia(Lista *li);

int consulta_lista_pos(Lista *li, int pos, struct aluno *al);

int consulta_lista_mat(Lista *li, int mat, struct aluno *al);

struct aluno coleta_dados(Lista *li);

int matricula_confere(int num_mat, Lista *li);

int remove_lista_final(Lista *li);

int remove_lista_inicio(Lista *li);

int remove_lista(Lista *li, int matricula);

void libera_lista(Lista *li);
