#include <stdio.h>

float volume( float c, float l, float a){
    return( c * l * a);
}
int main(){
    float com, lar, are, vol;

    printf("digite o comprimento: ");
    scanf("%f",&com);
    printf("digite a largura: ");
    scanf("%f",&lar);
    printf("digite a area: ");
    scanf("%f",&are);
    vol = volume( com, lar,are);
    printf("o volume é: %.1f",vol);
    return 0;

}