#include <stdio.h>

int main()
{
    //int numeros[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int numeros[3][3] = {{1, 2, 3} , {4, 5, 6} , {7, 8, 9}};
    int k = 0;
    int j = 0;
    
    for(j = 0; j < 3; j++) // 1 vez
        for(k = 0; k < 3; k++) // 3 vezes até 0(j) 2(k), dai o loop volta p for J, agr com 1 e K passa por 0,1,2;
        {
            printf("%d ", numeros[j][k]);
            if (k == 2)
                printf("\n");
        }
    
    return 0;
}
