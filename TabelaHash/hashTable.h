/* Tipo de dado que será armazenado na tabela */
typedef struct aluno{
    int matricula;
    char nome[40];
    float n1, n2, n3;
}ALUNO;

/* Nomeando a struct hash para se tornar visível no arquivo main.c, sendo seus campos visíveis apenas no hashTable.c
  Apenas o seu nome será visível no main.c */
typedef struct hash Hash;

/* Funções disponíveis ao programador para utilizar a tabela hash */
Hash *criaHash(int TABLE_SIZE);

void liberaHash(Hash *ha);

int chaveDobra(int chave, int TABLE_SIZE);

//int valorString(char *str);

int duploHash(int H1, int chave, int i, int TABLE_SIZE);

ALUNO insereAluno();

int insereHash_enderecoAberto(Hash *ha, struct aluno al);

int buscaHash_enderecoAberto(Hash *ha, int mat, struct aluno *al);

