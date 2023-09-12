#include <stdio.h>
#include <stdlib.h>

int main(){
    float *alunos = NULL;
    int quantidade = 0, i;
    float  media, nota;

    printf("\nInforme a quantidade de alunos da turma: ");
    scanf(" %d", &quantidade);

    //alocar mem�ria para um n�mero float com o tamanho inserido pelo usu�rio
    alunos = (float*) calloc(quantidade, sizeof(float));

    //verificar se a mem�ria foi alocada com sucesso
    if(alunos == NULL){
        printf("ERRO: Sem memoria!\n");
        exit(1);
    }

    //imprimir os valores desse vetor que s�o �mpares
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
    //imprimir a m�dia da turma
    printf("\n\tMedia da turma: \n\n");
    media /= quantidade;
    printf("Media: %2.2f\n", media);

    //Limpar a mem�ria
    free(alunos);

    printf("\n\n\n");
    system("pause");
    return 0;

}

