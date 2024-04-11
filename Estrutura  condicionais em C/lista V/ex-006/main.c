#include <stdio.h>

int main(){
    float c, f;
    printf("qual e a temperatura em faharenheit:\n");
    scanf("%f",&f);
    c = ( f - 32)/ 1.8;
    printf("a tremperatura em celsius: %f\n", c);
    return 0;
}