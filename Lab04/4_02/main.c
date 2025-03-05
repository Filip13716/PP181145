#include <stdio.h>
#include <stdlib.h>

int liczba;

int main()
{
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    printf("Zero oznacza podzielnosc, a jeden nie: %d", liczba&1);

    return 0;
}
