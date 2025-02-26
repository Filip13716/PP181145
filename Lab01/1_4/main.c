#include <stdio.h>
#include <stdlib.h>

int l1, l2, l3;
float srednia;

int main()
{
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &l1);

    printf("Podaj druga liczbe: ");
    scanf("%d", &l2);

    printf("Podaj trzecia liczbe: ");
    scanf("%d", &l3);

    srednia=(l1+l2+l3)/3;

    printf("\nSrednia: %f", srednia);

    return 0;
}
