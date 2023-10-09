#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;

    printf("quantos numeros vc vai digitar? ");
    scanf("%d", &N);

    double vetor[N];

    for (i = 0; i < N; i++){
        printf("digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    printf("\nNUMEROS DIGITADOS:\n");
    for (i = 0; i < N; i++) {
        printf("%.1lf\n", vetor[i]);
    }

    printf("Hello world!\n");
    return 0;
}
