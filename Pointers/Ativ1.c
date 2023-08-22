#include <stdio.h>
#include <stdlib.h>

//Variaveis globais que serão utilizadas nos módulos para realizar os cálculos
void calculoVantagens(float numHoras, float salHora, int nfilhos, float valfilhos);
void calculoDeducoes(float taxaIR);
float salBruto, salFam, vantagens, INSS, IRPF, Deducoes;

int main() {
    //variaveis locais que receberão atribuições
    int filhos;
    float horas, sal, valor, taxa;

    printf("\nInforme o numero de horas: ");
    scanf("%f", &horas);
    printf("\nSalario por hora: ");
    scanf("%f", &sal);
    printf("\nNumero Filhos: ");
    scanf("%d", &filhos);
    printf("\nValor por filho: ");
    scanf("%f", &valor);
    printf("\n\nInsira o valor da taxaIR R$: ");
    scanf("%f", &taxa);

    //Executar os módulos
    calculoVantagens(horas, sal, filhos, valor);
    calculoDeducoes(taxa);

    printf("\n\tSalario bruto: R$%.2f", salBruto);
    printf("\n\tSalario familia: R$%.2f", salFam);
    printf("\n\tVantagens: R$%.2f", vantagens);
    printf("\n");
    printf("\n\tINSS: R$%.2f", INSS);
    printf("\n\tIRPF: R$%.2f", IRPF);
    printf("\n\tDeducoes: R$%.2f", Deducoes);

    printf("\n\n\n");
    system("pause");
    return 0;
}

void calculoVantagens(float numHoras, float salHora, int nfilhos, float valfilhos){
    salBruto = numHoras * salHora;
    salFam = nfilhos * valfilhos;
    vantagens = salBruto + salFam;
}

void calculoDeducoes(float taxaIR){
    INSS = salBruto * 0.08;
    IRPF = salBruto * taxaIR;
    Deducoes = INSS + IRPF;
}
