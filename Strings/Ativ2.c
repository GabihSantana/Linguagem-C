#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char firstname[15], secname[20], lastname[20], aux[5] = " ", fullname[80] = " ";

    printf("\nDigite seu primeiro nome: ");
    gets(firstname);
    printf("\nDigite seu primeiro sobrenome: ");
    gets(secname);
    printf("\nDigite o seu ultimo sobrenome: ");
    gets(lastname);


    strcat(fullname , firstname);
    strcat(fullname, aux);
    strcat(fullname , secname);
    strcat(fullname , aux);
    strcat(fullname , lastname);

    printf("\n\n Nome completo: %s", fullname);

    printf("\n\n\n");
    system("pause");
    return 0;
}
