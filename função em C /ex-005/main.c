#include <stdio.h>

void res( int n){
    if ( n % 5 == 0){
        printf("%d ele é múltiplo de 5\n",n);
    }
    else{
        printf("%d ele não é múltiplo de 5\n",n);
    }
}
int main(){
    int v;
    printf("digite um valor: ");
    scanf("%d",&v);
    res( v);
    return 0;
}