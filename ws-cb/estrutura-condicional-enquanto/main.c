#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma;
    x = 0;

    printf("digite um numero: ");
    scanf("%d", &x);

    while (x != 0) {
        soma = soma + x;

        printf("digite outro numero: ");
        scanf("%d", &x);

    }

    printf("SOMA = %d\n", soma);

    printf("Hello world!\n");
    return 0;
}
