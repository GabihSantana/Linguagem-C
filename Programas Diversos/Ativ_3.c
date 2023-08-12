#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0;

    printf("Digite um numero: \n");
    scanf(" %d", &num);

    if(num == 1){
        printf("A \n\n\n");
    }

    else
        if(num == 2){
        printf("B \n\n\n");
    }

    else
        if(num == 3){
            printf("C \n\n\n");
        }

    else
        if(num == 4){
            printf("D \n\n\n");
        }

    else{
        printf("0 \n\n\n");
    }

    system("pause");
    return 0;
}
