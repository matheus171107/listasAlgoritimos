#include <stdio.h>

float calcularS(int num){
    float s = 0;

    for(int i = num; i > 0; i--){
        s += (1.0/i);
    }
    return s;
}   

int main(){
    int num;
    float s;

    printf("Digite o valor para calcular a S: ");
    scanf("%d", &num);

    s = calcularS(num);

    printf("\nO valor de S eh: %.2f", s);
    return 0;
}