#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int vetor[] = {1, 4, 3, 6, 7, 5, 8, 4, 8, 1};
    int *pntVetor = vetor;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){

            int a = *(pntVetor+j); 
            int b = *(pntVetor+(j+1));
            if(a > b){
                swap(&a, &b);
                *(pntVetor+j) = a;
                *(pntVetor+(j+1)) = b;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        printf(" %d ", *pntVetor++);
    }
    return 0;
}