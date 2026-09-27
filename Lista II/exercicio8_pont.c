#include <stdio.h>

void preencheVetor(int *pVetor, int valor){
    for(int i = 0; i < 10; i++){
        *(pVetor + i) = valor;
        printf(" %d ", *(pVetor+i));
    }
}

int main(){
    int vetor[10];
    int valor = 3;

    preencheVetor(vetor, valor);

    return 0;
}