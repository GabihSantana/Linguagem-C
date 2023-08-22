#include <stdio.h>
#include <stdlib.h>

int main(){
    int matricula;
    float p1, p2, p3, mediap;

    printf("Insira o numero de matricula do aluno: ");
    scanf(" %d", &matricula);

    printf("\nInsira a nota da primeira prova: ");
    scanf(" %f", &p1);
    printf("\nInsira a nota da segunda prova: ");
    scanf(" %f", &p2);
    printf("\nInsira a nota da terceira prova: ");
    scanf(" %f", &p3);

    mediap = ((p1 * 1) + (p2 * 1) + (p3 * 2)) / 4;

    if (mediap >= 6){
        printf("\nO aluno %d foi APROVADO com a media de %.2f", matricula, mediap);
    }
    else{
        printf("\nO aluno %d foi REPROVADO com a media de %.2f", matricula, mediap);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}

