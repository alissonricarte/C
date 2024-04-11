#include <stdio.h>

int fatorial( int n){
    int c ;
    int s=1;
    for( c = n; c >= 1; c--){
            s = s * c;
    }
    printf("o fatoriall de %d é: %d\n",n,s);
    return s;
}
int main(){
    int v;
    do{ 
    printf("digite um numero: ");
    scanf("%d",&v);
    if( v < 0){
        printf("valor não é aceito!\n");
    }
    } while( v < 0);
    fatorial( v);
    
    return 0;
}