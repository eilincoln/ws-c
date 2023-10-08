#include <stdio.h>
#include <string.h>
int main()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    // aqui começa a entrada de dados;
    printf("digite a idade: ");
    scanf("%d", &idade);

    printf("digite o salario: ");
    scanf("%lf", &salario);

    printf("digite a altura: ");
    scanf("%lf", &altura);


    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);

    return 0;
}
