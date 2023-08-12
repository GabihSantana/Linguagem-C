#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0;


    printf("Digite um numero: \n");
    scanf(" %d", &num);

    switch(num){
        case 1:
            printf("A \n\n\n");
            break;

        case 2:
            printf("B \n\n\n");
            break;

        case 3:
            printf("C \n\n\n");
            break;

        case 4:
            printf("D \n\n\n");
            break;

        default:
            printf("0 \n\n\n");
            break;
    }

    system("pause");
    return 0;
}
