#include <stdio.h>

int main(){
    int s,s1,s2, n1,n2;

    printf("digite um numero:\n");
    scanf("%i", &n1);
    printf("digite outro mumero:\n");
    scanf("%i",&n2);
    s = n1 + n2;
    s1 = n1 * 2;
    s2 = n2 * 3;
    printf("a soma entre eles dois: %i\n", s);
    printf("o dobro do primeiro numero: %i\n", s1);
    printf("o triplo do segundo numero: %i\n", s2);
    return 0;

}