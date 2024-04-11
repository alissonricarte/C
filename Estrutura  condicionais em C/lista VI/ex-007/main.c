#include <stdio.h>

int main(){
    float n1,n2,n3,mp,mf,af;

    printf("primeira nota: ");
    scanf("%f",&n1);
    printf("segunda nota: ");
    scanf("%f",&n2);
    printf("terceira nota: ");
    scanf("%f",&n3);
    mp = ( n1 + n2 + n3 ) / 3;
    if ( mp >= 7.0 ){
        printf("Aluno aprovado, com a nota: %f \n",mp);
    }
    else if ( mp < 3.5){
        printf("Aluno reprovado, não vai fazer a AF, com a media: %f \n",mp);
    }
    else if ( mp > 3.5 || mp < 7.0){
        printf("Aluno reprovado, vai fazer a AF\n");
        printf("qual foi a nota na af: ");
        scanf("%f",&af);
        mf = ((6 * mp) + ( 4 * af)) / 10;
        if ( mf >= 5.0){
            printf("Aluno aprovado na AF,com a nota: %f \n",mf);
        }
        else if( mf < 5.0){
            printf("Aluno reprovado na AF,com a nota: %f \n",mf);
        }
    }
}