#include <stdio.h>

int main(){
    int n;

    printf("digite um numero: ");
    scanf("%i",&n);
    if ( n % 2 == 0){
        printf("valor par\n");
    }
    else{
        printf("numero ímpa\n");
    }
    return 0;
}