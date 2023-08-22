#include <stdio.h>
#include <stdlib.h>

int main(){
    float raio, area;
    float pi = 3.14;

    printf("\nInsira o valor do raio de um circulo: ");
    scanf(" %f", &raio);

    area = (raio * raio) * pi;

    printf("\nO valor da area do circulo e: %.2f", area);


    printf("\n\n\n");
    system("pause");
    return 0;
}

