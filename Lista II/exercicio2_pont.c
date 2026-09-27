#include <stdio.h>

int main(){
    int n1, n2;
    int *pn1 = &n1, *pn2 = &n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    if(pn1 > pn2){
        printf("Endereco: %p, valor: %d", pn1, *pn1);
    }else{
        printf("Endereco: %p, valor: %d", pn2, *pn2);
    }
    return 0;
}