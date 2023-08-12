#include <stdio.h>

int main()
{
    int mat[3][3];
    int j, k, n = 0;
    
    //Apenas números Pares
    
    for(j = 0; j < 3; j++)
        for(k = 0; k < 3; k++)
        {
            n = n + 2;
            mat[j][k] = n;
        }
        
    for(j = 0; j < 3; j++)
        for(k = 0; k < 3; k++)
        {
           printf ("%d ", mat[j][k]);
            if (k == 2)
                printf("\n");
        }
        
    return 0;
}
