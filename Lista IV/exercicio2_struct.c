#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};

struct retangulo{
    struct ponto ps_esquerdo;
    struct ponto pi_direito;    
};

struct retangulo meuRetangulo;

void calcular(float *area, float *diagonal, int *perimetro){
    int largura, altura;

    largura = meuRetangulo.pi_direito.x - meuRetangulo.ps_esquerdo.x;
    altura = meuRetangulo.ps_esquerdo.y - meuRetangulo.pi_direito.y;

    *area = largura*altura;
    *diagonal =  sqrt(pow(largura, 2.0) + pow(altura, 2.0));
    *perimetro = (2 * altura) + (2 * largura);
}

int main(){
    float area, diagonal;
    int perimetro;

    printf("Digite X e Y do ponto superior esquerdo (X Y): ");
    scanf("%d %d", &meuRetangulo.ps_esquerdo.x, &meuRetangulo.ps_esquerdo.y);
    printf("Digite X e Y do ponto inferior direito (X Y): ");
    scanf("%d %d", &meuRetangulo.pi_direito.x, &meuRetangulo.pi_direito.y);

    calcular(&area, &diagonal, &perimetro);
    printf("\nA area eh: %.2f", area);
    printf("\nA diagonal eh: %.2f", diagonal);
    printf("\nO perimetro eh: %d", perimetro);

    return 0;
}