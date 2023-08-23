#include <stdio.h>
#include <stdlib.h>

int main(){
    float h, r, v;

    printf("\nInsira a altura do cilindro circular: ");
    scanf(" %f", &h);
    printf("\nInsira o raio do cilindro circular: ");
    scanf(" %f", &r);

    v = 3.14 * (r * r) * h;

    printf("\nO volume do cilindro é de %.2f", v);


    printf("\n\n\n");
    system("pause");
    return 0;
}
