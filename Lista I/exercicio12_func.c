#include <stdio.h>

void taboada(int num){
    for(int i = 1; i <= num; i++){
        int result = i*num;
        printf("\n%d x %d = %d", i, num, result);
    }
}

int main(){
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    taboada(num);

    return 0;
}