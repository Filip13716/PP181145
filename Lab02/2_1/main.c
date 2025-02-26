#include <stdio.h>
#include <stdlib.h>

int a,b,c;

int main()
{
    printf("Podaj liczbe 1: ");
    scanf("%d", &a);

    printf("Podaj liczbe 2: ");
    scanf("%d", &b);

    printf("Podaj liczbe 3: ");
    scanf("%d", &c);

    printf("%d", (a+b)%c);

    return 0;
}
