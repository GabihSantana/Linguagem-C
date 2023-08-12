#include <stdio.h>
#include <string.h>

int main()
{
    char nome[10];
    int k = 0;
    int cont = 0;
    
    //Quantidade de \0 || nulos

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Olá %s\n", nome);
    
    for (k = 0; k < 10; k++)
    {
        if (nome[k] == '\0')
        cont++;
    }
    printf("%d nulos", cont);
    
    return 0;
}
