#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração dos vetores com 5 posições:
    int v1[5], v2[5];
    int i = 0, j = 0;
    int var = 0;

    // Preenchendo vetor 1
    for (i = 0; i < 5; i++){
        printf("\nInforme o valor do elemento %d do vetor 1: ", i + 1);
        scanf("%d", &v1[i]);
    }
    printf("\n");
    // Preenchendo vetor 2:
    for (j = 0; j < 5; j++){
        printf("\nInforme o valor do elemento %d do vetor 2: ", j + 1);
        scanf("%d", &v2[j]);
    }
    printf("\n\n");

    printf("Vetor 1: ");
    for (i = 0; i < 5; i++){
        printf("%d ", v1[i]);
    }

    printf("\n\n");

    printf("Vetor 2: ");
    for (j = 0; j < 5; j++){
        printf("%d ", v2[j]);
    }

    printf("\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (v1[i] == v2[j]){
                printf("\n\nValores em comum nas posicoes: %d e %d", i + 1, j + 1);
                var++; //para identificar se esse if foi executado
            }
        }
    }
    printf("\n\n");
    if(var == 0) { // Se o if não foi executado, não possuam os mesmos valores
        printf("Nao possuem valores em comum \n\n");
    }
    system("pause");
    return 0;
}
