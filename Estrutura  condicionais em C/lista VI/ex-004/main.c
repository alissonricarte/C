#include <stdio.h>

int main(){
    float v1 , v2 , c ,m;
    printf("quantas maças vc deseja: ");
    scanf("%f",&m);
    v1 = 1.30;
    v2 = 1.10;
    if( m < 12){
        c = v1 * m;
        printf("o toltal a  se pagar é: %f\n",c);
    }
    else
    if( m  >= 12 ){
        c = v2 * m;
        printf("o toltal a  se pagar é: %f\n",c);
    }
}