#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, num1, num2, num3, num4;

    printf("Insira um numero inteiro de 4 digitos: ");
    scanf(" %d", &num);

    num4 = num%10;
    num /= 10;
    num3 = num%10;
    num /= 10;
    num2 = num%10;
    num /= 10;
    num1 = num%10;

    printf("%d\n%d\n%d\n%d", num1, num2, num3, num4);


    printf("\n\n\n");
    system("pause");
    return 0;
}

