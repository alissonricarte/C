#include <stdio.h> 

int main(){
    int  c;

    printf("digite seu codigo: ");
    scanf("%i",&c);
    if ( c == 1){
        printf("Alimento não-perecível \n");
    }
    else if ( c >= 2 && c <= 4){
        printf("Alimento perecível\n");
    }
    else if ( c == 5 || c== 6){
        printf("Vestuário\n");
    }
    else if ( c == 7){
        printf("Higiene pessoal\n");
    }
    else if ( c >= 8 && c <= 10){
        printf("Utensílios domésticos\n");
    }
    else{
        printf("código Inválido\n");
    }
    return 0;
}