#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[50];
    int numMatricula;
    float notas[3];
};

struct aluno alunos[5];

int main(){
    float soma = 0, media = 0, maiorMedia = 0;
    char alunoMaiorMedia[50];

    for(int i = 0; i < 5; i++){
        printf("\n---- Aluno %d -----", i+1);

        printf("\nNome: ");
        scanf("%s", &alunos[i].nome);
        printf("Numeros de matricula:");
        scanf("%d", &alunos[i].numMatricula);
        
        for(int j = 0; j < 3; j++){
            printf("- Nota %d: ", j+1);
            scanf("%f", &alunos[i].notas[j]);
        }

    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            soma += alunos[i].notas[j];  
        } 
        media = soma/3.0;
        soma = 0;
        if(media > maiorMedia){
            strcpy(alunoMaiorMedia, alunos[i].nome);
            maiorMedia = media;
        }
    }

    printf("O aluno com maior media foi %s com %.2f de media", alunoMaiorMedia, maiorMedia);

    return 0;
}