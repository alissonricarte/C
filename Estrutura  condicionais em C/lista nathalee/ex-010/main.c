#include <stdio.h>

int main(){
    int c,id,s=0;
    for ( c = 1; c <= 10; c++){
        printf("quantos anos vc tem: ");
        scanf("%i",&id);
        if( id >= 18){
            s++;
        }
    }
    printf("o total de pessoas é: %i\n",s);
    return 0;
}