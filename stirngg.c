#include <stdio.h>

int main()
{
    char s[10];

    printf("Digite: ");
    fgets(s, 10, stdin);
    fflush(stdin);
    
    printf("Resultado: ");
    puts(s);
    puts("");
    
    return 0;
}
