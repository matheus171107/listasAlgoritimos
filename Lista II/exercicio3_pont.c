#include <stdio.h>

int main(){
    float vetor[10] = {3.1, 4.3, 6.7, 8.9, 2.3, 4.5, 1.2, 9.8, 10.4, 7.8};

    for(int i = 0; i < 10; i++){
        printf("\nElemento %d: %p", i, &vetor[i]);
    }

    return 0;
}