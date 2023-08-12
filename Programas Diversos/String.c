#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[30];
    int k;
    int a = 0;
    int n = 0;
    int comp = 0;
    
    //Contador de Letras "a", comprimento e nulos
    
    printf("Digite algo: ");
    gets(palavra);
    comp = strlen(palavra);

    for	(k = 0; k < 30; k++)
    {
        if	(palavra[k] == 'a' || palavra[k] == 'A')
            a++;
        else 
            if (palavra[k] == '\0')
                n++;
    }
    
    printf("%d letras 'a'\n", a);
    printf("%d caracteres nulo\n", n);
    printf("%d é o comprimento da string", comp);

    return 0;
}
