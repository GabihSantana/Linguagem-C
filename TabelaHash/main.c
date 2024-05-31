#include <stdio.h>
#include <stdlib.h>
#include "controls.h"
#include "hashTable.h"

int main()
{
    int tamanho = 1013; /* TABLE_SIZE  - Número primo */
    int atv, operacao;
    int loop = 1;
    int x;
    /* Cria a tabela hash */
    Hash *elem;
    elem = criaHash(tamanho);
    /* Variaveis para Inserção e busca*/
    ALUNO novoal;
    int busca;


    while(loop == 1){
        /* Escolha do tipo de execucao */
        atv = opcMenu();
        system("cls");
        /*  */
        switch(atv){
        /* */
        case 1:
            printf("\n\t*** Insercao com tratamento de colisao ***\n");
            while(loop == 1){
                operacao = menuOperacoes();
                switch(operacao){
                case 1:
                    system("cls");
                    printf("\n\t*** INSERCAO ***");

                    novoal = insereAluno();

                    x = insereHash_enderecoAberto(elem, novoal);
                    if(x){
                        printf("\nAluno inserido com sucesso!");
                    }else{
                        printf("\nNao foi possivel inserir o aluno!");
                    }

                    printf("\n\n");
                    system("pause");
                    loop = continuar();
                    system("cls");
                    break;
                /* */
                case 2:
                    system("cls");
                    printf("\n\t*** BUSCA ***");
                    printf("\nInsira o numero de matricula para buscar: ");
                    scanf(" %d", &busca);

                    x = buscaHash_enderecoAberto(elem, busca, &novoal);
                    if(x){
                        printf("\n\tBusca realizada com sucesso!\n");
                        printf("\n\tMatricula: %d", novoal.matricula);
                        printf("\n\tNome: %s", novoal.nome);
                        printf("\n\tNota 1: %.2f", novoal.n1);
                        printf("\n\tNota 2: %.2f", novoal.n2);
                        printf("\n\tNota 3: %.2f", novoal.n3);

                        printf("\n\n");
                        system("pause");
                    }
                    else{
                        printf("\nNumero de matricula nao localizada!");
                    }

                    loop = continuar();
                    system("cls");
                    break;

                    default:
                        system("cls");
                        printf("\n\t\t\t *** ATENCAO ***");
                        printf("\n\t *** Operacao nao encontrada - Informe outra ***\n");
                        break;
                }
            }
            break;

            default:
                system("cls");
                printf("\n\t\t\t *** ATENCAO ***");
                printf("\n\t *** Operacao nao encontrada - Informe outra ***\n");
                break;
        }
    }
    liberaHash(elem);
    printf("\n\tOperacao Encerrada!");

    printf("\n\n\n");
    system("pause");
    return 0;


}
