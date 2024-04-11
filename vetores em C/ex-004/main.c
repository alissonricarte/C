#include <stdio.h>

int main(){
    int v[10];
    int i;
    int maior_v;
    for( i = 0; i < 10; i++){
        printf("valor %d é:",i);
        scanf("%d",&v[i]);
        if( v[i] > maior_v){
            maior_v = v[i];
        }
    }
    printf("o maior valor é: %d\n",maior_v);
    return 0;
}