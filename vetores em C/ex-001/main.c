#include <stdio.h>

int main(){
    int  v[8];
    int i;
    for ( i = 0; i <= 7;i++){
        printf("digite o %d° valor: ", i + 1);
        scanf("%d",&v[i]);
    }
    printf("vertores");
    for ( i= 7; i >=  0; i--){
        printf("%d\n",v[i]);
    }
    return 0;
}