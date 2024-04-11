#include <stdio.h>

int main(){
    int cont;
    float n , n1 , n2 ,n3;
    for ( cont = 1; cont <= 10; cont++){
        printf("Aluno: %i\n",cont);
        printf("===============\n");
        printf("N1: ");
        scanf("%f",&n1);
        printf("N2: ");
        scanf("%f",&n2);
        printf("N3: ");
        scanf("%f",&n3);
        n = (n1 + n2 + n3)/3;
        if ( n >= 9 ){ 
         printf("sua nota é A\n");
        }
        else if ( n >= 7 && n < 9){
         printf("sua nota é B\n");
        }
        else if ( n >= 6 && n < 7){
         printf("sua nota é C\n");
        }
        else if ( n >= 4 && n < 6){
         printf("sua nota é D\n");
        }
        else if ( n >= 0 && n < 4){
         printf("sua nota é E\n");
        }
    }
    return 0;
}