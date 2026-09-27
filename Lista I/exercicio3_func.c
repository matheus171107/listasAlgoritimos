#include <stdio.h>

void conversaoTempo(int tempo){
    int horas, minutos, segundos;

    horas = tempo/3600;
    minutos = (tempo % 3600)/60;
    segundos = tempo % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)", horas, minutos, segundos);
}

int main(){
    int tempo;
    printf("Digite o tempo  da fabrica em minutos: ");
    scanf("%d", &tempo);

    conversaoTempo(tempo);
    return 0;
}