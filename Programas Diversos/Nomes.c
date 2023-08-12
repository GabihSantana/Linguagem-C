#include <stdio.h> 
#include <string.h> 

int main()
{
    char nome[6] = "Paulo";
    int comp = 0;
    int k = 0;
    printf("%s", nome);
    comp = strlen(nome);
    printf("\nO nome tem %d caracteres\n", comp); // 5 
    //printf("O nome tem %ld caracteres", strlen(nome));

while (k < comp)
//while (k < strlen(nome))
//while (nome[k] != '\0')
{
        printf("%c ", nome[k]);
        k++; //P a u l o 
}

    return 0;
}
