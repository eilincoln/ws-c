#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double y;

    x = 5;
    y = 2 * x;

    printf("%d\n", x);
    printf("%.1lf\n", y); // aqui posso notar que não fez diferença no caso de ser um numero double

    printf("Hello world!\n");
    return 0;
}
