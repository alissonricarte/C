#include <stdio.h>

void resul( int n){
    if( n % 2 == 0){
        printf("%d ele é numero par\n",n);
    }
    else{
        printf("%d ele é numero ímpar\n",n);
    }
}
int main(){
    int v;
    printf("digite um numero: ");
    scanf("%d",&v);
    resul( v);
    return 0;
}