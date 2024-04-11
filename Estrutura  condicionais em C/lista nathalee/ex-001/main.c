#include <stdio.h>

int main(){
    int n1,n2,n3;

    printf("digite um numero  interio: ");
    scanf("%i",&n1);
    printf("digite outro numero interio: ");
    scanf("%i",&n2);
    printf("digite outro numero interio: ");
    scanf("%i",&n3);
    if ( n1 > n2 && n1 > n3 ){
        printf("o maior numero é: %i\n",n1);
    }
    else if ( n2 > n1 && n2 > n3){
        printf("o maior numero é: %i\n",n2);
    }
    else{
        printf("o maior numero é: %i\n",n3);
    }
    return 0;
}