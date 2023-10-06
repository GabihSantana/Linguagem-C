void calculoVantagens(float numHoras, float salHora, float nfilhos, float valfilhos, float *salaBruto, float *salaFam, float *vantagem);
void calculoDeducoes(float salaBruto, float taxaIR, float *inss, float *irpf, float *deducao);

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
