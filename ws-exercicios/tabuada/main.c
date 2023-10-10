#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, produto;

    printf("deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        produto = n * i;
        printf("%d X %d = %d\n", n, i, produto);
    }


    printf("Hello world!\n");
    return 0;
}
