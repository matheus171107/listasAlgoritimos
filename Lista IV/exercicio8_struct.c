#include <stdio.h>

struct data{
    int dia;
    int mes;
    int ano;
};

struct data data1;
struct data data2;
struct data dataTemp;

void verificaBissexto(int ano, int *diasMes, int *diasAno){
    if(ano % 100 == 0){
        if(ano % 400 == 0 && ano % 4 == 0){
            *(diasMes+2) = 29;
            *diasAno = 366;
        }
    }else if(ano % 4 == 0){
        *(diasMes+2) = 29;
        *diasAno = 366;
    }else{
        *(diasMes+2) = 28;
        *diasAno = 365; 
    }
}

void ordenarDatas(){
    if(data1.ano > data2.ano){
        dataTemp.dia = data1.dia;
        dataTemp.mes = data1.mes;
        dataTemp.ano = data1.ano;

        data1.dia = data2.dia;
        data1.mes = data2.mes;
        data1.ano = data2.ano;

        data2.dia = dataTemp.dia;
        data2.mes = dataTemp.mes;
        data2.ano = dataTemp.ano;
    }
}

int main(){
    int anosDecorridos, diasAno, somaDias = 0, diferencaMeses;
    int diasMes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Digite a primeira data (EX 10 08 2008): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (EX 10 08 2008): "); 
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    ordenarDatas();
    anosDecorridos = data2.ano - data1.ano;
    

    if(anosDecorridos >= 2){

        verificaBissexto(data1.ano, diasMes, &diasAno);
        somaDias = diasMes[data1.mes] - data1.dia;

        for(int i = (data1.mes+1); i <= 12; i++){
            somaDias += diasMes[i];
        }

        for(int i = data1.ano+1; i <= data2.ano-1; i++){
            verificaBissexto(i, diasMes, &diasAno);
            somaDias += diasAno;
        }

        verificaBissexto(data2.ano, diasMes, &diasAno);
        for(int i = 1; i <= (data2.mes-1); i++){
            somaDias += diasMes[i];

        }
        somaDias += data2.dia;

    }else if(anosDecorridos == 1){

        verificaBissexto(data1.ano, diasMes, &diasAno);
        somaDias = diasMes[data1.mes] - data1.dia;

        for(int i = (data1.mes+1); i <= 12; i++){
            somaDias += diasMes[i];

        }

        verificaBissexto(data2.ano, diasMes, &diasAno);
        for(int i = 1; i <= (data2.mes-1); i++){
            somaDias += diasMes[i];

        }
        somaDias += data2.dia;

    } else{
        verificaBissexto(data1.ano, diasMes, &diasAno);
        
        if(data1.mes < data2.mes){
            somaDias = diasMes[data1.mes] - data1.dia;
            for(int i = (data1.mes+1); i <= (data2.mes-1); i++){
                somaDias += diasMes[i];
            }
            somaDias += data2.dia;

        }else if(data1.mes > data2.mes){
            somaDias = diasMes[data2.mes] - data2.dia;
            for(int i = (data2.mes+1); i <= (data1.mes-1); i++){
                somaDias += diasMes[i];
      
            }
            somaDias += data1.dia;

        }else{
            somaDias = data1.dia - data2.dia;
            if(somaDias < 0) somaDias = somaDias * -1;
        }
    }

    printf("O total de dias corridos foi: %d", somaDias);
}