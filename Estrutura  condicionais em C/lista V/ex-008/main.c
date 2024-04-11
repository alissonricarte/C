#include <stdio.h>

int main(){
    int idade,resul_dias, ano;

    printf("quantos anos vc tem: ");
    scanf("%i", &idade);
    ano = 360;
    resul_dias = idade * ano;
    printf("o seu dia de vida aproximadanente: %i \n", resul_dias);
    return 0;
}