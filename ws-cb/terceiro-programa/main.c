#include <stdio.h>
#include <stdlib.h>

int main()
{
    // aqui vai imprimir na tela
    printf("bom dia");
    printf("boa tarde");

    //para quebrar linha eu coloco o \n
    printf("bom dia\n");
    printf("boa tarde\n");

    //===============================================


    int x, y;

    x = 10;
    y = 20;

    printf("%d\n", x);
    printf("%d\n", y);


    //==================================

    //imprimindo o double

    double z;
    x = 2.3456;
    printf("%.2lf\n", z);

    //==========================================

    int idade;
    double salario;
    char nome[50];
    char sexo;
    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Maria Silva");
    sexo = 'F';
    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo, salario, idade);





    printf("Hello world!\n");
    return 0;
}
