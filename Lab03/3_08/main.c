#include <stdio.h>
#include <stdlib.h>

int a,b,c;

int main()
{
    system("chcp 65001");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int wynik = a>b&&a>c ? a : b>c ? b : c;

    printf("Wiêksze jest: %d", wynik);
    return 0;
}
