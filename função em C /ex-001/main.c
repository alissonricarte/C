#include <stdio.h>

void soma( int n){
    if( n == 0){
        printf("seu numero é igual a 0\n");
    }
    else{
        printf("não é igual a 0\n");
    }
}
int main(){
    int v;
    printf(" digite um numero: ");
    scanf("%d",&v);
    soma(v);
    return 0;
}