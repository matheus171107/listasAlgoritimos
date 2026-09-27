#include <stdio.h>

int converteIdade(int anos, int meses, int dias){
    int qtdDias;
    qtdDias = dias + (30 * meses) + (356 * anos);
    
    
    return qtdDias;
}

int main(){
    int anos, meses, dias, idadeConvetida;

    printf("Digite quantos anos, meses e dias voce tem (5 4 16): ");
    scanf("%d %d, %d", &anos, &meses, &dias);

    idadeConvetida = converteIdade(anos, meses, dias);
    printf("Sao %d dias de idade", idadeConvetida);
    return 0;
}