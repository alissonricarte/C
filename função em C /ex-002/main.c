#include <stdio.h>

void reslt( int n){
    if ( n > 0){
        printf("%d ele é positivo\n",n);
    }
    else if ( n < 0 ){
        printf("%d ele é negativo\n", n);
    }
    else if( n == 0){
        printf(" 0 ele é neutro\n");
    }
}
int main(){
    int num;
    printf("digite um numero: ");
    scanf("%d",&num);
    reslt ( num);
    return 0;
}