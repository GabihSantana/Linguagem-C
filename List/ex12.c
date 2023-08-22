#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b;
    float hip;

    printf("\nInsira o valor de A: ");
    scanf(" %d", &a);
    printf("\nInsira o valor de B: ");
    scanf(" %d", &b);

    hip = sqrt((a * a) + (b * b));
    printf("\nA hipotenusa e igual a %.2f", hip);


    printf("\n\n\n");
    system("pause");
    return 0;
}

