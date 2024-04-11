#include <stdio.h>

int main(){
    int c,v;
    printf("qual valor escolhido: \n");
    scanf("%d",&v);
    for ( c =1; c <= 10; c++){
        printf("%d x %d = %d\n",c,v,v*c);
    }
    return 0;
}