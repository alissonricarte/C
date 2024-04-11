#include <stdio.h>
#include <math.h>

int main(){
    float p, a, imc, qua;
    printf("qual é seu peso: ");
    scanf("%f",&p);
    printf("qual é sua altura: ");
    scanf("%f",&a);
    qua = pow( a, 2);
    imc = p / qua;
    printf("o seu IMC é: %f \n", imc);

    return 0;
    
}