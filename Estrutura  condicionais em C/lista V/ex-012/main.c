#include <stdio.h>

int main(){
    int v,c,l,a;

    printf("comprimento ");
    scanf("%i", &c);
    printf("largura ");
    scanf("%i",&l);
    printf("altura ");
    scanf("%i",&a);
    v = c * l * a;
    printf("comprimrnto: %i\n", v);
}