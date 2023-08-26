#include <stdio.h>
#include <stdlib.h>

void main(){
    int *a, *b, c = 5, d = 5;

    b = &c; a = &d;

    /*end vai depender de quem foi posicionado primeiro, logo, vai ser sempre b o maior. Uma vez que trocamos a posição de
    b e a, a sempre terá o end maior que b*/
    if(a > b){
        printf("\nO end apontado por a(%p)e maior que o end apontado por b(%p)", a, b);
    }else
        if(a < b){
        printf("\nO end apontado por a(%p)e menor que o end apontado por b(%p)", a, b);
        }else{
        printf("\n a e b tem armazenado o mesmo end: (%p)", a);
    }
    //utilizar o * quando necessario acessar o conteúdo do end
    if (*a == *b){
        printf("\n\nOs end apontados por a e b possuem o mesmo valor: %d", *a);
    }

    printf("\n\n\n");
    system("pause");
}
