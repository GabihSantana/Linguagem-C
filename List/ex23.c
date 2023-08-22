#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, num1, num2, num3;

    printf("\nInsira um numero inteiro positivo de 3 digitos: ");
    scanf(" %d", &num);

    if(num > 0){
        num1 = num%10;
        num = num/10;
        num2 = num%10;
        num = num/10;
        num3 = num%10;
    }

    printf("%d%d%d", num1, num2, num3);

    printf("\n\n\n");
    system("pause");
    return 0;
}

