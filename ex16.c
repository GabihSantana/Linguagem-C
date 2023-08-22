#include <stdio.h>
#include <stdlib.h>

int main() {
    float imp = 780.000;
    float prim, seg, ter;

    printf("\nValor total: %.3f\n", imp);

    prim = imp * 0.46;
    printf("\nO primeiro ganhador recebe %.3f", prim);

    seg = imp * 0.32;
    printf("\nO primeiro ganhador recebe %.3f", seg);

    ter = imp * 0.22;
    printf("\nO terceiro ganhador recebe %.3f", ter);


    printf("\n\n\n");
    system("pause");
    return 0;
}
