#include <stdio.h> 
#include <string.h> 

int main()
{
    char nome[13];

    //nome sem espaço
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Você se chama %s\n", nome);
    
    return 0;
}
