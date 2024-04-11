#include <stdio.h>

int main(){
    int n , d ,s ;

    printf("informe o numerador: ");
    scanf("%i",&n);
    printf("informe o denominado: ");
    scanf("%i",&d);
    s = n / d;
    if( d == 0 ){
        printf("operação não poderar ser feita\n");
    }
    else
    if( d % 2 == 0 ){
        printf("divisivel\n");
        printf("resultado:%i\n",s);
    }
    else
    if( d % 3 == 1 ){
        printf("não é divisivel \n");
        printf("resultado:%i\n",s);
    }
    return 0;
}