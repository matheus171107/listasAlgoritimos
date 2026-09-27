#include <stdio.h>

void imprimirVetor(int *pVetor){
    for(int i = 0; i < 10; i++){
        printf(" %d ", *(pVetor+i));
    }
}

int main(){

    int vetor[10] = {3, 6, 4, 3, 19, 93, 60, 32, 63, 43};

    printf("O vetor resultante eh: ");
    imprimirVetor(vetor);

    return 0;
}