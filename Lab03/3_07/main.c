#include <stdio.h>
#include <stdlib.h>

int a,b;

int main()
{
    system("chcp 65001");
    scanf("%d", &a);
    scanf("%d", &b);

    int wynik = a>b ? a : b;

    printf("Wiêksze jest: %d", wynik);
    return 0;
}
