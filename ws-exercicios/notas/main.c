#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, notaFinal;

    printf("digite a nota 1: ");
    scanf("%f", &nota1);
    printf("digite a nota 2: ");
    scanf("%f", &nota2);

    notaFinal = nota1 + nota2;

    printf("NOTA FINAL = %.1f\n", notaFinal);

    if(notaFinal < 60) {
        printf("REPROVADO\n");
    }

    printf("Hello world!\n");
    return 0;
}
