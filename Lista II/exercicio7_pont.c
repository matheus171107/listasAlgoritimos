#include <stdio.h>
#include <string.h>

int verificaStrings(char *pString1, char *pString2){
    int tS1 = strlen(pString1);
    int tS2 = strlen(pString2);

    for(int i = 0; i < tS1; i++){
        if(*(pString1+i) == *pString2){
        
            for(int j = 0; j < tS2; j ++){
                if(*(pString1+(j+i)) == *(pString2+j)){
                    printf("%c", *(pString1+(j+i)));
                    *(pString1+(j+i)) = -1;
                    *(pString2+j) = -1;
                }
            }
        }
    }
}

int main(){
    char string1[30];
    char string2[30];

    printf("Digite a primeira String: ");
    scanf("%s", &string1);
    printf("Digite a segunda String: ");
    scanf("%s", &string2);

    verificaStrings(string1, string2);

    return 0;
}