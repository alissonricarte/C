#include <stdio.h>
#include <math.h>

int main(){
    float a, r,s;

    printf("qual é p valor do Raio: ");
    scanf("%f", &r);
    s = pow(r , 2);
    a = (3.14) * s;
    printf("a circunferência é: %f \n", a);

    return 0;

}