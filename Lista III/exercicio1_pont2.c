#include <stdio.h>

void calcular_esfera(float raio, float *area, float *volume){
    *area = 4.0 * 3.14 * (raio * raio);
    *volume = (4.0/3.0) * 3.14 * (raio * raio * raio);
}   

int main(){
    float raio, area, volume;

    float *pRaio = &raio;
    float *pArea = &area;
    float *pVolume = &volume;
    
    printf("Digite o Raio da Esfera: ");
    scanf("%f", pRaio);
    calcular_esfera(*pRaio, pArea, pVolume);

    printf("\nA area da esfera eh: %.2f", *pArea);
    printf("\nO volume da esfera eh: %.2f", *pVolume);

    return 0;
}