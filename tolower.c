#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texto[10] = "banana123";
    int k = 0;
    
    //tolower e toupper
    
    printf("Texto Original: ");
    printf("%s\n", texto);
    printf("Texto convertido: ");
    while (k < strlen(texto))
    {
        printf("%c", toupper(texto[k])); // or tolower
        k++;
    }
    return 0;
}
