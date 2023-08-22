#include <stdio.h>
#include <stdlib.h>

//Endereçamento por referência
void calculoVantagens(float numHoras, float salHora, float nfilhos, float valfilhos, float *salaBruto, float *salaFam, float *vantagem);
void calculoDeducoes(float salaBruto, float taxaIR, float *inss, float *irpf, float *deducao);

int main() {
    int filhos;
    float horas, sal, valor, taxa;
    //antiga variável global:
    float salBruto, salFam, vantagens, INSS, IRPF, Deducoes;

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

    //Ir para os módulos
    calculoVantagens(horas, sal, filhos, valor, &salBruto, &salFam, &vantagens);
    calculoDeducoes(salBruto, taxa, &INSS, &IRPF, &Deducoes);

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
    //Apenas as variáveis que receberão atribuições possuem seus endereços por referência
    void calculoVantagens(float numHoras, float salHora, float nfilhos, float valfilhos, float *salaBruto, float *salaFam, float *vantagem){
    *salaBruto = numHoras * salHora;
    *salaFam = nfilhos * valfilhos;
    *vantagem = *salaBruto + *salaFam;
}

    void calculoDeducoes(float salaBruto, float taxaIR, float *inss, float *irpf, float *deducao){
    *inss = salaBruto * 0.08;
    *irpf = salaBruto * taxaIR;
    *deducao = *inss + *irpf;
}

