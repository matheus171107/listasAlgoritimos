#include <stdio.h>

int main(){
    float matriz[3][3] = {
        (1.2, 4.5, 2.3),
        (5.7, 9.4, 12.5),
        (2.8, 8.5, 0.5)
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\n [%d][%d]: %p", i, j, &matriz[i][j]);
        }
    }
    return 0;
}