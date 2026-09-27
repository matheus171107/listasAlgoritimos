#include <stdio.h>


int main(){
    int matriz[3][3] = {{17, 32, 67},
                        {12, 78, 27},
                        {34, 19, 91}};

    int *pntMatriz = &matriz[0][0];
    int soma;
    int *endAnterior;
    
    endAnterior = pntMatriz;
    soma = *pntMatriz;
    
    for(int i = 0; i < 9; i++){
        if(pntMatriz++ - endAnterior == 3){
            soma += *pntMatriz; 
            endAnterior = pntMatriz;
        }   
    }
    printf("A soma do elemtos na diagonal eh: %d", soma);

    return 0;
}