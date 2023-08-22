#include <stdio.h>
#include <stdlib.h>

int main(){
    float hdegrau, hsubir, esc;

    printf("Insira a altura do degrau(cm): ");
    scanf(" %f", &hdegrau);
    printf("Insira a altura que deseja alcançar subindo a escada(m): ");
    scanf(" %f", &hsubir);

    esc = (hdegrau * 100) / hsubir;

    printf("Para chegar em %.0fm, voce deve subir %.0f", hsubir, esc);

    printf("\n\n\n");
    system("pause");
    return 0;
}
