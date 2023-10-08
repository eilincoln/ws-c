#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora;

    printf("digite a hora do dia: ");
    scanf("%d", &hora);

    if(hora < 12){
        printf("bom dia\n");
    } else {
        printf("boa tarde\n");
    }

    printf("Hello world!\n");
    return 0;
}
