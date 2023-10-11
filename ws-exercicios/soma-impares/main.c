#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma, troca;

    printf("digite dois numeros: ");
    scanf("%d %d", &x, &y);

    if (x > y){
        troca = x;
        x = y;
        y = troca;
    }


    soma = 0;
    for (int i = x + 1; i < y; i++){
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("Soma dos impares = %d\n", soma);

    printf("Hello world!\n");
    return 0;
}
