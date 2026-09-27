#include <stdio.h>

void verificaTriangulo(int x, int y, int z){

    if((x+y) > z && (y+z) > x && (x+z) > y){
        if(x == y && y == z){
            printf("O triangulo formado eh EQUILATERO");
        }else if((x != y && y != z && x != z)){
            printf("O triangulo formado eh ESCALENO");
        }else{
            printf("O triangulo formado eh ISOCELES");;
        }
    }else{
        printf("Os lados nao formam um triangulo");
    }
}

int main(){
    int x, y, z;

    printf("Digite o valor do lado 1: ");
    scanf("%d", &x);
    printf("Digite o valor do lado 2: ");
    scanf("%d", &y);
    printf("Digite o valor do lado 3: ");
    scanf("%d", &z);

    verificaTriangulo(x, y, z);

    return 0;
}