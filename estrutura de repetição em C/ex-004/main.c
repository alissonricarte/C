#include <stdio.h>

int main(){
    int inicio= 10;
    int fim= 50;
    int cont=0;

    for( int i = inicio; i <= fim; i++  ){
      if(i % 2 == 0){
        printf("%i\n",i);
        cont++;
      }
    }
    printf("o valor total é: %i\n",cont);
    return 0;
}