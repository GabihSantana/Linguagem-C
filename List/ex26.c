#include <stdio.h>
#include <stdlib.h>

int main(){
    int hr, min, seg, duracao, termino;
    int horas, minutos, segundos, ht, mt, st;

    printf("\nInsira a hora(h) de inicio: ");
    scanf(" %d", &hr);
    printf("\nInsira os minutos(min) inicio: ");
    scanf(" %d", &min);
    printf("\nInsira os segundos(seg) inicio: ");
    scanf(" %d", &seg);
    printf("\n\nInforme a duracao(em segundos): ");
    scanf(" %d", &duracao);

    horas = duracao / 3600;
    minutos = (duracao - (horas * 3600)) / 60;
    segundos = duracao - (horas * 3600) - (minutos * 60);

    ht = hr + horas;
    mt = min + minutos;
    st = seg + segundos;

    printf("\n\tA experiencia ira terminar em %d:%d:%ds", ht, mt, st);

    printf("\n\n\n");
    system("pause");
    return 0;
}
