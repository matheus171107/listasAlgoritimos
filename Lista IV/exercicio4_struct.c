#include <stdio.h>

struct hora{
    int hora;
    int minuto;
    int segundo;
};

struct hora horas[5];

int main(){
    int indiceMaiorHora = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o %d horario (Ex: 13:43:13): ", i+1);
        scanf("%d:%d:%d", &horas[i].hora, &horas[i].minuto, &horas[i].segundo);
    }
    for(int i = 0; i < 5; i++){
        if(horas[i].hora > horas[indiceMaiorHora].hora){

            indiceMaiorHora = i;
        }else if(horas[i].hora == horas[indiceMaiorHora].hora){

            if(horas[i].minuto > horas[indiceMaiorHora].minuto){
                indiceMaiorHora = i;
            }else if(horas[i].minuto == horas[indiceMaiorHora].minuto){
                if(horas[i].segundo > horas[indiceMaiorHora].segundo){
                    indiceMaiorHora = i;
                }
            }
        }
    }

    printf("A maior hora informada foi: %d:%d:%d", horas[indiceMaiorHora].hora, horas[indiceMaiorHora].minuto, horas[indiceMaiorHora].segundo);

    return 0;
}