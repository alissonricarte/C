#include <stdio.h>

int main(){
    int c, s=0;
    for (c =1; c <= 11; c++){
        if( c % 2 == 1){
        s = s + c;
        printf("%i\n",c);
        }
    }
    printf("seu valor: %i\n",s);
    return 0;
}