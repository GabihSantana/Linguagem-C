#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1 = 0, sqr = 0;

    printf("Insira um numero real: ");
    scanf(" %f", &n1);
    sqr = n1 * n1;
    printf("\nO quadrado do numero %.2f e: %.2f", n1, sqr);


    printf("\n\n\n");
    system("pause");
    return 0;
}
