#include <stdio.h>
#include <stdlib.h>

int main(){
    float angraus, radianos;

    printf("\nInsira o angulo em graus: ");
    scanf(" %f", &angraus);

    radianos = (angraus * 3.14) / 180;

    printf("\nAngulo em radianos: %.2f", radianos);

    printf("\n\n\n");
    system("pause");
    return 0;
}


