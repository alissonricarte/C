#include <stdio.h>
char s;
int num1, num2,num3;

void linha3 ( char s){
    int c;
    for( c = 1; c <= num1; c++){
        printf("%c",s);
    }
        printf("\n");
}
void linha4 ( char s){
    int c;
    for( c = 1; c <= num2; c++){
        printf("%c",s);
    }
        printf("\n");
}
void linha5 ( char s){
    int c;
    for( c = 1; c <= num3; c++){
        printf("%c",s);
    }
        printf("\n");
}
int main(){ 

    printf("escolha o sibolo (@,#,$,&,*)");
    scanf("%c",&s);
    printf("digite 3 numero: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    linha3( s);
    linha4( s);
    linha5( s);
    linha4( s);
    linha3( s);
    return 0;
}