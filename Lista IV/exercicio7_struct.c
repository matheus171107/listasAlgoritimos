#include<stdio.h>
#include <string.h>

struct dadosAtleta{
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
};

struct dadosAtleta atletas[5];
struct dadosAtleta tempDados;

int main(){
    int maisVelho = 1;


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
        for(int j = 0; j < 4; j++){
            if(atletas[j].idade < atletas[j+1].idade){
                strcpy(tempDados.nome, atletas[j].nome);
                strcpy(tempDados.esporte, atletas[j].esporte);
                tempDados.idade = atletas[j].idade;
                tempDados.altura = atletas[j].altura;

                strcpy(atletas[j].nome, atletas[j+1].nome);
                strcpy(atletas[j].esporte, atletas[j+1].esporte);
                atletas[j].idade = atletas[j+1].idade;
                atletas[j].altura = atletas[j+1].altura;

                strcpy(atletas[j+1].nome, tempDados.nome);
                strcpy(atletas[j+1].esporte, tempDados.esporte);
                atletas[j+1].idade = tempDados.idade;
                atletas[j+1].altura = tempDados.altura;
            }
        }
    }

    printf("\nOrdenado do atleta mais Velho para o mais Novo: ");

    for(int i = 0; i < 5; i++){
        printf("\nAtleta %d:", i+1);

        printf("\nNome: %s", atletas[i].nome);
        printf("\nEsporte: %s", atletas[i].esporte);
        printf("\nIdade: %d", atletas[i].idade);
        printf("\nAltura: %f", atletas[i].altura);
        
    }


    return 0;
}