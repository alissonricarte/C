#include <stdio.h>

int main(){
    int v[5];
    int s=0;
    int i;
    for( i = 0;i < 5;i++){
        printf("digite valor %d°: ",i + 1);
        scanf("%d",&v[i]);
        s = s + v[i];
    }
    printf("soma entre eles: %d\n",s);
    return 0;
}