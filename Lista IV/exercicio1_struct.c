#include <stdio.h>

struct dados{
    char nome[100];
    int idade;
    char endereco[100];
};

struct dados meusDados;

int main(){
    
    printf("Digite seu nome: ");
    fgets(meusDados.nome, sizeof(meusDados.nome), stdin);
    printf("Digite seu endereco: ");
    fgets(meusDados.endereco, sizeof(meusDados.endereco), stdin);
    printf("Digite sua idade: ");
    scanf("%d", &meusDados.idade);


    printf("\nSeu nome eh: %s", meusDados.nome);
    printf("Idade: %d", meusDados.idade);
    printf("\nEndereco: %s", meusDados.endereco);

    return 0;
}