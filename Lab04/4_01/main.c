#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2, b = 7;

    printf("Zmienna a: %d, zmienna b: %d\n", a, b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("Nowe warto�ci: %d, %d", a, b);

    return 0;
}
