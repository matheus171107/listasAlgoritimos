#include <stdio.h>

float calcular(float n1, int n2, char operacao){

    switch (operacao)
    {
    case '+':
        return (n1+n2);
    break;
    case '-':
        return (n1-n2);
    break;
    case '*':
        return (n1*n2);
    break;
    case '/':
        return (n1/n2);
    break;
    default:
        printf("Opercacao selecionada invalida");
    }
}

int main(){
    int n1, n2;
    float resultado;
    char operacao;

    printf("Informe qual eh a oprecao desejada: ");
    scanf("%c", &operacao);
    printf("Digite o 1 valor: ");
    scanf("%d", &n1);
    printf("Digite o 2 valor: ");
    scanf("%d", &n2);

    resultado = calcular(n1, n2, operacao);
    printf("%d %c %d = %.2f", n1, operacao, n2, resultado);

    return 0;
}