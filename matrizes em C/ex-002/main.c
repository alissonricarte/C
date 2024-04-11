#include <stdio.h>

int main(){
    int A[2][3];
    int B[2][3];
    int i,j;
    int s,s1= 0,s2= 0;
    for( i = 0; i< 2; i++)
        for( j = 0; j < 3; j++){
            printf("digite o valor que vai ocupa a coluna %d do índice %d: ",i + 1,j + 1);
            scanf("%d",&A[i][j]);
            s1 = s1 + A[i][j];
        }
    printf("\n\n");
    for(i = 0; i < 2; i++)
        for( j = 0; j < 3;j++){
            printf("digite o valor que vai ocupa a coluna %d do índice %d: ",i + 1,j + 1);
            scanf("%d",&B[i][j]);
            s2 = s2 + B[i][j];
        }
    s = s1 + s2;
    printf("\nresultado:%d\n",s);
    return 0;
}