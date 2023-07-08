#include <stdio.h>

int main()
{
    int mat[4][3];
    int j, k, n = 0;
    
    //Apenas a Diagonal Principal
    
    for(j = 0; j < 3; j++)
        for(k = 0; k < 3; k++)
        {
            printf("Número %d: ", ++n);
            scanf ("%d", &mat[j][k]);
        }
        
        for(j = 0; j < 3; j++)
            for(k = 0; k < 3; k++)
            {
                if(j == k)
                printf ("%d ", mat[j][k]);
                if (k == 2)
                    printf("\n");
            }
        
    return 0;
}
