#include <stdio.h>

int main(){
    int c, s=0 ;
    for ( c = 1 ; c < 500; c++){
        if( c % 2 == 0){
            s = s + c ;
        }
    }
    printf("%i\n",s);
}