#include <stdio.h>

int main(){
    int vetor[5];
    int *pvetor = vetor;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", (pvetor+i));
    }

    for(int i = 0; i < 5; i++){
        int dobro = *(pvetor + i) * 2;
        printf(" %d ", dobro);
    }

    return 0;
}