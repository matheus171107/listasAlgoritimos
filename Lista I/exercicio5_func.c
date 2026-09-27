#include <stdio.h>

int verificaPerfeito(int num){
    int somaDivisores = 0;

    for(int i = (num - 1); i > 0; i--){
        if(num % i == 0){
            somaDivisores += i;
        }
    }
    if(somaDivisores == num){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num, result;

    printf("Digita um numero para verificar: ");
    scanf("%d", &num);

    result = verificaPerfeito(num);
    if(result){
        printf("\nO numero %d eh perfeito", num);
    }else{
        printf("\nO numero %d NAO e perfeito", num);
    }

    return 0;
}