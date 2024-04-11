#include <stdio.h>
//índice//
int main(){
    char nome[50];
    int i;
    int cont = 1;
    printf("digite seu nome completo: ");
    gets(nome);
    for(i = 0; nome[i] != '\0';i++){
        cont++;
    }
    printf("\n\na quantidade é:%d\n",cont);
    return 0;
}