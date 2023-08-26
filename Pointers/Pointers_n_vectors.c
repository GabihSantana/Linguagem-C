#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[] = {1, 2, 3, 4};
    int *ap_vet, i, x;

    ap_vet = vet; //ap_vet = &vet[0]

    for(i = 0; i < 4; i++){
        printf("%d , ", *(ap_vet + i)); //ou ap_vet[i]
    }

    //Atribuição:

    x = *ap_vet;
    printf("\n%d", x); //vet[0]
    x = *(ap_vet + 1); //vet[1]
    printf("\n%d", x);


    printf("\n\n\n");
    system("pause");
    return 0;
}

