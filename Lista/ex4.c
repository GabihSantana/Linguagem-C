#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 0, qnt = 0;
    printf("Insira um numero: ");
    scanf(" %d", &num);

    qnt = (num / 5);
    printf("\nA quinta parte do numero %d e %d", num, qnt);


    printf("\n\n\n");
    system("pause");
    return 0;
}
