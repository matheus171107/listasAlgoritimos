#include <stdio.h>

int main(){
    int vetor[5];
    int *pVetor = vetor;

    for(int i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", (pVetor+i));
    }

    for(int i = 0; i < 5; i++){
        if(*(pVetor+i) % 2 == 0){
            printf("\nNumero %d no endereco: %p", *(pVetor+i) , (pVetor+i));
        }
    }
    return 0;
}