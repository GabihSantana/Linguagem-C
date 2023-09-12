#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet = NULL;
    int numeros = 0, impar, i;

    //Repetir o processo para que o n�mero inserido seja maior que zero
    do{
        printf("\nInsira um valor positivo para indicar o tamanho do vetor dinamico: ");
        scanf(" %d", &numeros);
    }while(numeros <= 0);

    //alocar mem�ria para um n�mero inteiro com o tamanho inserido pelo usu�rio
    vet = (int*) calloc(numeros, sizeof(int));

    //verificar se a mem�ria foi alocada com sucesso
    if(vet == NULL){
        printf("ERRO: Sem memoria!\n");
        exit(1); //exit_failure
    }

    //permitir que o usuario aloque os n�meros �mpares maiores que zero:
    printf("\n\tInsira %d numero(s) impar(es) maior(es) que zero: \n", numeros);
    for(i = 0; i < numeros; i++){
        do{
            printf("\nInsira o valor na posicao %d: ", i + 1);
            scanf(" %d", &impar);
            vet[i] = impar;
        }while(vet[i] % 2 == 0 || vet[i] <= 0);
    }

    system("cls"); //limpar o console

    //imprimir os valores alocados no vetor
    printf("\n\tVetor com %d numeros inteiros impares maiores que zero: \n\n", numeros);
    for(i = 0; i < numeros; i++){
        printf("\t%d", vet[i]);
    }
    //Limpar a mem�ria
    free(vet);

    printf("\n\n\n");
    system("pause");
    return 0;

}
