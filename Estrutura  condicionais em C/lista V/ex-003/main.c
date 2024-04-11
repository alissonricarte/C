#include <stdio.h> 

int main(){
    int n ,s1 ,s2;

    printf("fale um numero:\n");
    scanf("%i",&n);
    s1 = n - 1;
    s2 = n + 1;
    printf("o antecessor do valor e %i ",s1);
    printf("e o sucessor e %i \n",s2);
    return 0;
}