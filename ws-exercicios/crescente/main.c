#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("digite 2 numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y){
        if (x < y){
            printf("CRESCENTE!\n");
        } else {
            printf("DECRECENTE!\n");
        }

        printf("digite outros 2 numeros: \n");
        scanf("%d", &x);
        scanf("%d", &y);
    }
    printf("Hello world!\n");
    return 0;
}
