#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, giagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);


    area = base * altura;
    printf("AREA = %.4lf\n", area);

    perimetro = (base * 2) + (altura * 2);
    printf("PERIMETRO = %.4lf\n", perimetro);

    giagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));
    printf("DIAGONAL = %.4lf\n", giagonal);

    printf("Hello world!\n");
    return 0;
}
