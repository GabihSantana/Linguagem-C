#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for(i = 0; i < 10; i++){
        if(i == 5){
            printf("\n\n\t\t Captura de i em: %d \n\n", i);
            continue;
            printf("Essa mensagem nao sera impressa!!");
        }
        printf("Valor de i: %d \n", i);
    }

    printf("\n\n");
    system("pause");
    return 0;
}


