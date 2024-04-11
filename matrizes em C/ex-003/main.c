#include <stdio.h>

int main(){
    float m[5][3];
    float media;
    int i,j;
    char n[5][40];
    for( i = 0; i < 5; i++){ 
        printf("nome do aluno: ");
        scanf("%s",n[i]);
        for( j = 0; j < 3; j++){
            printf("%dº nota: \n",j + 1);
            scanf("%f",&m[i][j]);
        }
    }
    for( i = 0; i < 5; i++){
        float s = 0;
        for( j = 0; j < 3;j++){
            s = s + m[i][j];
        }
        media  = s / 3;
        printf("o aluno %s está com a media: %.1f\n",n[i],media);
    }
    return 0;
}