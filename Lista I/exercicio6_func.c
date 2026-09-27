#include <stdio.h>

char conversaoNota(float nota){

    if(nota >= 0.0 && nota <= 4.9){
        return 'D';
    }else if(nota >= 5.0 && nota < 6.9){
        return 'C';
    }else if(nota >= 7.0 && nota < 8.9){
        return 'B';
    }else if(nota >= 9.0 && nota < 10.0){
        return 'A';
    }else{
        return '0';
    }
}

int main(){
    float nota;
    char conceito;

    printf("Digite a nota do respectivo aluno: ");
    scanf("%f", &nota);

    conceito = conversaoNota(nota);
    if(conceito == '0'){
        printf("Valor invalido, porfavor tente novamente!");
    }else{
        printf("Nota %.2f - Conceito: %c", nota, conceito);
    }
    
    return 0;
}