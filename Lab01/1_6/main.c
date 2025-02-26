#include <stdio.h>
#include <stdlib.h>

float liczba;

int main()
{
    printf("Podaj liczbe: ");
    scanf("%f", &liczba);

    printf("Twoja liczba podwojona: %f", liczba*2);

    return 0;
}
