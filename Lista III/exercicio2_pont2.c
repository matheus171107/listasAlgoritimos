#include <stdio.h>

int *analisaVetor(int *pVetor, int qtdElementos, int elementoX){
    
    for(int i = 0; i < qtdElementos; i++){
        if(*(pVetor+i) == elementoX){
            return pVetor+i;
        }
    }
    return NULL;
}

int main(){

    int qtdElementos = 0, elementoX = 0;
    int *pntElementoX;

    printf("Digite o tamanho do vetor desejado: ");
    scanf("%d", &qtdElementos);

    int vetor[qtdElementos];
    int *pVetor  = vetor;
    
    for(int i=0; i < qtdElementos; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", pVetor++);
    }

    printf("Digite o elemnto X: ");
    scanf("%d", &elementoX);

    pntElementoX = analisaVetor(vetor, qtdElementos, elementoX);
    printf("O elemento %d esta no endereco %p", *pntElementoX, pntElementoX);

    return 0;
}