#include <stdio.h>

int main(){
    int c,i,s;

    printf("=====================================\n");
    printf("codigo     especificação     preço \n");
    printf("=====================================\n");
    printf(" 100       cachoro quente    08,00 \n");
    printf(" 101          bauru          09,00 \n");
    printf(" 102        X-salada         10,00 \n");
    printf(" 103       hambúrguer        12,00 \n");
    printf(" 104       refrigerante-lata 03,00 \n");
    printf("=====================================\n");
    printf("qual é o codigo do seu item: \n");
    scanf("%i",&c);
    printf("quantos itens são: \n ");
    scanf("%i", &i);
    switch ( c )
    {
    case 100:
        s = 8 * i;
        printf("o valor a pagar é: %i\n",s);
    break;
    case 101:
        s = 9 * i;
        printf("o valor a pagar é: %i\n",s);
    break;
    case 102:
        s = 10 * i;
        printf("o valor a pagar é: %i\n",s);
    break;
    case 103:
        s = 12 * i;
        printf("o valor a pagar é: %i\n",s);
    break;
    case 104:
        s = 3 * i;
        printf("o valor a pagar é: %i\n",s);
    break;
    default:
        printf("codigo não está no sistema! \n");
    break;
    }

    return  0;
}