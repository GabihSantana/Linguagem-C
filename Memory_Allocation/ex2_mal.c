#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str;
    char *so_ponteiro;

    str = (char*) malloc(25 * sizeof(char));
    if(str == NULL){
        printf("Espa�o insuficiente");
        exit(1);
    }else{ //mem�ria alocada
        str = "teste";
        so_ponteiro = "Novo teste com ponteiro!"; //neste caso, o array de caracteres ter� o tamanho exato da string atribuida
        printf("String no vetor alocado: %s \n\n", str);
        printf("String direto no ponteiro: %s \n\n", so_ponteiro);
    }


}
