#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double C, F;
    char resp;

    do {
        printf("digite a temperatura em Celsius: ");
        scanf("%lf", &C);

        F = 9.0 * C / 5.0 + 32.0;

        printf("o equivalente em Fahrenheit: %.1lf\n", F);

        printf("deseja repetir? (s/n)?");
        limpar_entrada();
        scanf("%c", &resp);
    } while (resp == 's');

    printf("Hello world!\n");
    return 0;
}
