#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("quantos numeros vc vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++) {
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS NEGATIVOS: \n");

    for (int i = 0; i < n; i++) {
        if (vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
    }


    printf("Hello world!\n");
    return 0;
}
