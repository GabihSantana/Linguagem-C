#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("\n Insira um numero: ");
    scanf( "%d", &num);

    printf("\nSoma do Antecessor do dobro e sucessor de seu triplo: %d", (num * 2 - 1) + (num * 3 + 1));

    printf("\n\n\n");
    system("pause");
    return 0;
}


