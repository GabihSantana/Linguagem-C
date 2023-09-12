#include <stdio.h>
#include <stdlib.h>

int main(){
    float *alunos = NULL;
    int quantidade = 0, i;
    float  media, nota;

    printf("\nInforme a quantidade de alunos da turma: ");
    scanf(" %d", &quantidade);

    //alocar memória para um número float com o tamanho inserido pelo usuário
    alunos = (float*) calloc(quantidade, sizeof(float));

    //verificar se a memória foi alocada com sucesso
    if(alunos == NULL){
        printf("ERRO: Sem memoria!\n");
        exit(1);
    }

    //imprimir os valores desse vetor que são ímpares
    for(i = 0; i < quantidade; i++){
        printf("Informe a nota do aluno %d: ", i + 1);
        scanf(" %f", &nota);
        alunos[i] = nota;
        media += alunos[i];

        system("pause");
        system("cls");
        }

    printf("\n\tNotas: \n\n");
    for(i = 0; i < quantidade; i++){
        printf("Aluno %d: %2.2f\n", i + 1, alunos[i]);
    }
    //imprimir a média da turma
    printf("\n\tMedia da turma: \n\n");
    media /= quantidade;
    printf("Media: %2.2f\n", media);

    //Limpar a memória
    free(alunos);

    printf("\n\n\n");
    system("pause");
    return 0;

}

