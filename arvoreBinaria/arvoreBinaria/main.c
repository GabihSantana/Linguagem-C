#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main()
{
   int x;
   ArvBin *raiz;

   raiz = cria_arvBin();

   x = insere_arvBin(raiz, 150);
   if(x){
    printf("\nElemento inserido na arvore com sucesso");
   }else{
    printf("\nErro: elemento nao inserido na arvore.");
   }
   x = insere_arvBin(raiz, 110);
   if(x){
    printf("\nElemento inserido na arvore com sucesso");
   }else{
    printf("\nErro: elemento nao inserido na arvore.");
   }

   x = insere_arvBin(raiz, 100);
    x = insere_arvBin(raiz, 130);
    x = insere_arvBin(raiz, 120);
   x = insere_arvBin(raiz, 140);
   x = insere_arvBin(raiz, 160);

   printf("\n");

   if(vazia_arvBin(raiz)){
        printf("\nA arvore esta vazia.");
   }else{
        printf("\nA arvore possui elementos");
   }

   x = altura_arvBin(raiz);
   printf("\nAltura da arvore: %d\n", x);

   x = totalNO_arvBin(raiz);
   printf("Total de nos na arvore: %d\n", x);

   printf("\nVisita em pre ordem:\n");
   preOrdem_arvBin(raiz);

   printf("\n");

    printf("\nVisita em ordem:\n");
   emOrdem_arvBin(raiz);

   printf("\n");

    printf("\nVisita em pos ordem:\n");
   posOrdem_arvBin(raiz);

    printf("\n");

   printf("\nBusca na Arvore Binaria: ");
   if(consulta_arvBin(raiz, 140)){
        printf("\nConsulta realizada com sucesso!\n");
   }else{
        printf("\nElemento nao encontrado...\n");
   }

   x = remove_arvBin(raiz, 100);
   if(x){
    printf("\nElemento removido da arvore com sucesso\n");
   }else{
    printf("\nErro: elemento nao inserido na arvore.\n");
   }

    printf("\nVisita em pos ordem apos a remocao:\n");
   posOrdem_arvBin(raiz);


   liberar_arvBin(raiz);

   printf("\n\n\n");
   system("PAUSE");
}
