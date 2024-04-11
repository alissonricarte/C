#include <stdio.h>

int main(){
    float f,c;
    printf("qual e sua temperatura em celsius:");
    scanf("%f",&c);
    f = ( c * 1.8)+ 32;
    printf("sua temperatura em fahrenheit %f\n",f);
    return 0;
}