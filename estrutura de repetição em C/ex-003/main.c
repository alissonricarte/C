#include <stdio.h>

int main(){
    int c ,id;
    for (c = 1; c < 10;c++)
    {
       printf("qual é sua idade: ");
       scanf("%i",&id);
       if( id >=  18){
        printf("Você é maior de idade, com idade: %i\n",id);
       }
       else
       if(id < 18){
        printf("Você é menor de idade, com idade: %i\n",id);
       }
    }
    return 0;
}