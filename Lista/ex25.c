#include <stdio.h>
#include <stdlib.h>

int main(){
    int seg, hr, min;

    printf("Insira os segundos: ");
    scanf(" %d", &seg);

    hr = seg / 3600;
    min = (seg - (hr * 3600)) / 60;
    seg = seg - (hr * 3600) - (min * 60);

    printf("\n%dh, %dm, %ds", hr, min, seg);

    printf("\n\n\n");
    system("pause");
    return 0;
}
