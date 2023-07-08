#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[10] = "Nome Aqui";
    char nome2[10];
    
    //Atribuição de N1 no N2
    
    strcpy(nome2, nome1); //o número que atribui o valor vem em segundo
    printf("Nome 2: %s", nome2);

    return 0;
}
