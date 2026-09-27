#include <stdio.h>

int *buscar_subvetor(int *vetor, int tam_v, int *sub, int tam_s){
    int contIguais = 0;
    
    for(int i = 0; i < tam_v; i++){
        if(*vetor == *sub){
            for(int i = 0; i < tam_s; i++){
                if(*(vetor+i) == *(sub+i)){
                    contIguais++;
                }
            }

            if(contIguais == tam_s){
                return vetor;
            }else{
                contIguais = 0;
            }
        }
        vetor++;
    }

    return NULL;
}

int main(){
    int tamnhoVetor = 10, tamanhoSubVetor = 4;
    int vetor[] = {1, 4, 3, 6, 7, 5, 8, 4, 8, 1};
    int sub_vetor[] = {7, 5, 8, 4};

    int *end_subvetor = buscar_subvetor(vetor, tamnhoVetor, sub_vetor, tamanhoSubVetor);

    if(end_subvetor == NULL){
        printf("O Sub Vetor nao esta contido no Vetor");
    }else{
        printf("O elentos %d esta no enderoco %p ", *end_subvetor, end_subvetor);
    }
    
    return 0;
}