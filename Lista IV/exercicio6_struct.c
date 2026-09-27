#include<stdio.h>

struct dadosAtleta{
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
};

struct dadosAtleta atletas[5];

int main(){
    int maisAlto = 1, maisVelho = 1;

    for(int i = 0; i < 5; i++){
        printf("\n----- Atleta %d -----", i+1);

        printf("\nNome: ");
        scanf("%s", &atletas[i].nome);
        printf("Esporte: ");
        scanf("%s", &atletas[i].esporte);
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
    }


    for(int i = 0; i < 5; i++){
        if(atletas[i].altura > atletas[maisAlto].altura){
            maisAlto = i;
        }
        if(atletas[i].idade > atletas[maisVelho].idade){
            maisVelho = i;
        }
    }
  
    printf("\nO atleta mais alto eh: %s - %fm", atletas[maisAlto].nome, atletas[maisAlto].altura);
    printf("\nO atleta mais velho eh: %s - %d anos", atletas[maisVelho].nome, atletas[maisVelho].idade);


    return 0;
}