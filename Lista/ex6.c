#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, n4, media;
    printf("Insira as quatro notas: ");
    scanf(" %f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("\nA media das notas e: %.2f", media);


    printf("\n\n\n");
    system("pause");
    return 0;
}
