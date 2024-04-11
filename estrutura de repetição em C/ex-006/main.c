#include <stdio.h>

int main() {
    int n;
    int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0) {
            printf("0! = 1\n");
        } else {
            for (int i = 1; i <= n; i++) {
                fatorial *= i;
            }
            printf("%d! = %d\n", n, fatorial);
        }
    } else {
        printf("Nao existe fatorial de numero negativo.\n");
    }

    return 0;
}
