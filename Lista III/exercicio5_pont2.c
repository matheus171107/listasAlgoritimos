#include <stdio.h>

void extrair_estatisticas(int *vetor, float tamanho, int *min, int *max, float *media){

    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        if(*vetor < *min){
            *min = *vetor;
        }else if(*vetor > *max){
            *max = *vetor;
        }

        soma += *vetor;
        vetor++;
    }
    *media = soma/tamanho;
}

int main(){
    float tamanho = 10;
    int vetor[] = {5, 4, 3, 6, 7, 5, 8, 4, 8, 1};

    int min = vetor[0];
    int max = vetor[0];
    float media;

    extrair_estatisticas(vetor, tamanho, &min, &max, &media);

    printf("\nO maior valor encontrado foi: %d", max);
    printf("\nO manor valor encontrado foi: %d", min);
    printf("\nA media dos valores eh: %.2f", media);

    return 0;
}