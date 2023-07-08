#include <stdio.h>
#include <string.h>

int main()
{
    char string[20] = "abracadabra";
    int k = 0;
    int cont = 0;
    
    //Contador de letras
    
    for	(k = 0; k < 20; k++)
    {
        if	(string[k] == 'a')
        cont++;
    }
    printf("%d letras 'a'", cont);

    return 0;
}

