#include <stdio.h>

float calcularMedia(){
    float num, soma = 0, cont = 0, media;

    do{
        printf("Digite um valor (0 para sair): ");
        scanf("%f", &num);
        soma += num;
        cont++;  
    }while (num != 0);

    media = soma/(cont-1);
    return media;
}

int main(){
    float media = calcularMedia();
    printf("\n A media aritimetica dos valores eh: %.2f", media);
            
   return 0; 
}