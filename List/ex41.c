#include <stdio.h>
#include <stdlib.h>

int main(){
    float angraus, radianos;

    printf("\nInsira o angulo em radianos: ");
    scanf(" %f", &radianos);

    angraus = (radianos * 180) / 3.14;

    printf("\nAngulo em graus: %.2f", angraus);

    printf("\n\n\n");
    system("pause");
    return 0;
}



