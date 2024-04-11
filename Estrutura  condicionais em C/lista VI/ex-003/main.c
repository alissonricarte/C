#include <stdio.h>

int main(){
    float n, d ,s ;
    char o;
    printf("informe um nuemro: ");
    scanf("%f",&n);
    printf("qual é o operador: ");
    scanf(" %c",&o);
    printf("informe outro valor: ");
    scanf("%f",&d);
    switch ( o ){
        case '+':
        s = n + d;
        printf("resultado: %f\n",s);
        break;
        case '-' :
        s = n - d;
        printf("resultado: %f\n",s);
        break;
        case '*' :
        s = n * d;
        printf("resultado: %f\n",s);
        break;
        case '/':

        if( d == 0){
            printf("não pode fazer operação\n");
        }
        else{
            s = n / d;
            printf("resultado\n: %f",s);
        }
        break;
    }
    return 0;   
}