#include <stdio.h>
#include <stdlib.h>

int rok;

int main()
{
    printf("Podaj rok swojego urodzenia: ");
    scanf("%d", &rok);

    printf("Rok przed twoimi urodzinami to: %d", rok-1);

    return 0;
}
