#include <stdio.h>

void resul( int n){
    if ( n >= 18){
        printf("você é maior de idade:%d\n",n);
    }
    else{
         printf("você é menor de idade:%d\n",n);
    }
}
int main(){
    int i;
    printf("qual é sua idade: ");
    scanf("%d",&i);
    resul( i);
    return 0;
}