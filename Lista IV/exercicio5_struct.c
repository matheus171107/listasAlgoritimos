#include <stdio.h>

struct  dataNascimento{
    int dia;
    int mes;
    int ano;
};
struct dados{
    char nome[100];
    struct dataNascimento nascimento;
};

struct dados pessoas[6];

int main(){
    int indiceMaior = 1, indiceMenor = 1;

    for(int i = 0; i < 6; i++){
        printf("\n----- %d Pessoa -----", i+1);
        printf("\nNome: ");
        scanf("%s", &pessoas[i].nome);
        printf("Data de nascimento (Ex: 17/11/2007): ");
        scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
    }

    for(int i = 0; i < 6; i++){
        if(pessoas[i].nascimento.ano > pessoas[indiceMenor].nascimento.ano){
            indiceMenor = i;
        }else if(pessoas[i].nascimento.ano == pessoas[indiceMenor].nascimento.ano){
            if(pessoas[i].nascimento.mes > pessoas[indiceMenor].nascimento.mes){
                indiceMenor = i;
            }else if(pessoas[i].nascimento.mes == pessoas[indiceMenor].nascimento.mes){
                if(pessoas[i].nascimento.dia > pessoas[indiceMenor].nascimento.dia){
                    indiceMenor = i;
                }
            }
        }

        if(pessoas[i].nascimento.ano < pessoas[indiceMaior].nascimento.ano){
            indiceMaior = i;
        }else if(pessoas[i].nascimento.ano == pessoas[indiceMaior].nascimento.ano){
            if(pessoas[i].nascimento.mes < pessoas[indiceMaior].nascimento.mes){
                indiceMaior = i;
            }else if(pessoas[i].nascimento.mes == pessoas[indiceMaior].nascimento.mes){
                if(pessoas[i].nascimento.dia < pessoas[indiceMaior].nascimento.dia){
                    indiceMaior = i;
                }
            }
        }
    }

    printf("\nA pessoa mais nova eh %s que nasceu em : %d/%d/%d",pessoas[indiceMenor].nome, pessoas[indiceMenor].nascimento.dia, pessoas[indiceMenor].nascimento.mes, pessoas[indiceMenor].nascimento.ano);
    printf("\nA pessoa mais velha eh %s nasceu em: %d/%d/%d", pessoas[indiceMaior].nome, pessoas[indiceMaior].nascimento.dia, pessoas[indiceMaior].nascimento.mes, pessoas[indiceMaior].nascimento.ano);

    return 0;
}