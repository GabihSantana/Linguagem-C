#include <stdio.h>
#include <stdlib.h>

int main(){
    float hdegrau, hsubir, esc, height;

    printf("\nInsira a altura do degrau(cm): ");
    scanf(" %f", &hdegrau);
    printf("\nInsira a altura que deseja alcancar subindo a escada(m): ");
    scanf(" %f", &hsubir);

    height = hsubir * 100;
    esc = height / hdegrau;

    printf("\n\tPara chegar em %.0fm, voce deve subir %.0f degraus", hsubir, esc);

    printf("\n\n\n");
    system("pause");
    return 0;
}
