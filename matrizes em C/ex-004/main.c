#include <stdio.h>

int main(){
    float A[4][2];
    int i,j;
    for( i = 0; i < 4; i++){
        for( j = 0; j < 2; j++){
            printf("digite o valor coluna %d do índice %d: ",i + 1,j + 1);
            scanf("%f",&A[i][j]);
        }
    }
    for( i = 4 ; i > 0; i--){
        for( j = 2; j > 0; j--){
            printf("o valor em ordem invertida é: %f\n",A[i][j]);
        }
    }
    return 0;
}