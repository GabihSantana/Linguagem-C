#include <stdio.h>
int main()
{
    int n;
    char letras;
    float saldo;
    double salario;
    printf("Tipo int: %ld bytes\n", sizeof n);
    printf("Tipo char: %ld bytes\n", sizeof letras);
    printf("Tipo float: %ld bytes\n", sizeof saldo);
    printf("Tipo double: %ld bytes\n", sizeof salario);
printf("\n");
    printf("Tipo int: %ld bytes\n", sizeof (int));
    printf("Tipo char: %ld bytes\n", sizeof (char));
    printf("Tipo float: %ld bytes\n", sizeof (float));
    printf("Tipo double: %ld bytes\n", sizeof (double));
    printf("Números %ld bytes\n", sizeof n);



    return 0;
}
