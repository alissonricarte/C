#include <stdio.h>

float m;
float media(){
    float nota1,nota2,nota3;
    printf("digite primeira nota: ");
    scanf("%f",&nota1);
    printf("digite a  segunda nota: ");
    scanf("%f",&nota2);
    printf("digite a terceira nota: ");
    scanf("%f",&nota3);
    m  = (nota1 + nota2 + nota3)/ 3;
    printf("sua media é: %.1f\n",m);
    return m;
}
void nota(){
    if( m >= 9 && m <= 10){
        printf("nota A\n");
    }
    else if( m >= 7 && m < 9 ){
        printf("nota B\n");
    }
    else if ( m >= 6 && m < 7){
        printf("nota C\n");
    }
    else if( m >= 4 && m < 6){
        printf("nota D\n");
    }
    else if ( m >= 0 && m < 4){
        printf(" nota E\n");
    }
    else{
        printf("nota não encontrada!\n");
    }
}
int main(){
    media ();
    nota  ();
    return 0;
}