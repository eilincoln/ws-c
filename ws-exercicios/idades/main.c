#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[100], nome2[100];
    int idade1, idade2;
    double mediaIdade;

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    scanf("%99[^\n]", nome1);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    fflush(stdin);
    scanf("%99[^\n]", nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    mediaIdade = (double)(idade1 + idade2) / 2;

    printf("a idade media de %s e %s eh de %.1lf\n", nome1, nome2, mediaIdade);











    printf("Hello world!\n");
    return 0;
}
