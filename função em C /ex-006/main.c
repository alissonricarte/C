#include <stdio.h>

float area( float r){
    return (3.14 * r *r);
}
int main(){
    float r, a;
    printf("qual é raio:  ");
    scanf("%f",&r);
    a = area( r);
    printf(" area é :%.2f",a);
    return 0;
}