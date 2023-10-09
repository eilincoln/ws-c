#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    // iniciação das variaveis
    double largura, comprimento, valorTerreno, area, precoTerreno;

    // leitura dos dados
    printf("digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("digite o valor do metro quadrado: ");
    scanf("%lf", &valorTerreno);

    // processamento
    area = largura * comprimento;
    printf("area do terreno = %.2lf\n", area);

    precoTerreno = area * valorTerreno;
    printf("preco terreno = %.2lf\n", precoTerreno);


    printf("\nHello world!\n");
    return 0;
}
