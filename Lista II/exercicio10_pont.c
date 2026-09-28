#include <stdio.h>

int main(){
    int a, *b, **c, ***d;
    b = &a;
    c = &b;
    d = &c;

    printf("Digite um valor para a: ");
    scanf("%d", &a);

    printf("\nO dobro do valor eh: %d", (*b * 2));
    printf("\nO triplo do valor eh: %d", (**c * 3));
    printf("\nO quadruplo do valor eh: %d", (***d * 4));

    return 0;
}