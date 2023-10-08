#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, x, soma;

    printf("quantos numeros serao digitados? ");
    scanf("%d", &N);

    soma = 0;
    for(i = 1; i <= N; i++){
        printf("digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("SOMA = %d\n", soma);


    printf("Hello world!\n");
    return 0;
}
