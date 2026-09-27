#include <stdio.h>

int calcularSomatorio(int num){
    int somatorio = 0;

    for(int i = num; i > 0; i--){
        somatorio += i;
    }
    return somatorio;
}   

int main(){
    int somatorio, num;

    printf("Digite o valor para calcular a somatorio: ");
    scanf("%d", &num);

    somatorio = calcularSomatorio(num);

    printf("\nA somatoria de %d eh: %d", num, somatorio);
    return 0;
}