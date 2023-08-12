#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[60];
    int idade = 0;
    float salario = 0;

    printf("\nDigite seu nome: ");
    fgets(nome, 59 , stdin);
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);
    printf("\nDigite o seu salário R$: ");
    scanf("%f", &salario);

    printf("\n\n========== Dados ==========\n");
    printf("\n\tNome: %s \tIdade: %d \n\tSalário: R$%.2f", nome, idade, salario);

    printf("\n\n\n");
    system("pause");
    return 0;
}



