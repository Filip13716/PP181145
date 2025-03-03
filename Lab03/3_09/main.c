#include <stdio.h>
#include <stdlib.h>

int liczba;

int main()
{
    scanf("%d", &liczba);

    char wynik=liczba%2!=0 ? "Nieparzysta" : "Parzysta";

    printf("Twoja liczba jest: %c", wynik);

    return 0;
}
