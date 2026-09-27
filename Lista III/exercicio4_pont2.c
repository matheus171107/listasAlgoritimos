#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho){
    int *ptnInicio = vetor;
    int *ptnFim = vetor+tamanho-1;
    int value;

    for(int i = 0; i < tamanho/2; i++){
        value = *ptnInicio;
        *ptnInicio = *ptnFim;
        *ptnFim = value;

        ptnInicio++;
        ptnFim--;
    }
    for(int i = 0; i < tamanho; i++){
        printf(" %d ", *(vetor+i));
    }
}

int main(){
    int tamnhoVetor = 10;
    int vetor[] = {5, 4, 3, 6, 7, 5, 8, 4, 8, 1};

    inverte_vetor(vetor, tamnhoVetor);
    return 0;
}