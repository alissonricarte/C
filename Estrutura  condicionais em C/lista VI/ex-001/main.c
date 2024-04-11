#include <stdio.h>

int main(){
    int n1;
    printf("digite um numero:\n");
    scanf("%i",&n1);
    if ( n1 > 0 )
    {
        printf("esse numero é positivo\n");
    }
    else if ( n1 < 0 )
    {
        printf("esse numero é negativo\n");
    }
    else if ( n1 == 0)
    {
        printf("seu numero é neutro\n");
    }
    
    return 0;
}