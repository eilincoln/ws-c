<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome1, 50);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2;

    printf("A idade media de %s e %s é de %.1lf anos\n", nome1, nome2, media);

    printf("Hello world!\n");
    return 0;
}
=======
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
>>>>>>> 5f101c4820e34d1e29ad76b9563171ecfdf161c1
