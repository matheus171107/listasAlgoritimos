#include <stdio.h>

int main(){
    int a = 5;
    int b = 19;
    int *pa = &a;
    int *pb = &b;

    printf("\nO ponteiro da variavel A eh: %p", pa);
    printf("\nO ponteiro da variavel B eh: %p", pb);

    if(pa > pb){
        printf("\n\nA variavel A tem o maior endereco: %p", pa);
    }else{
        printf("\n\nA variavel B tem o maior endereco: %p", pb);
    }

    return 0;
}