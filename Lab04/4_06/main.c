#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba = 10, poz=3;

    printf("Przesuniecie o %d pozycje bitow w lewo liczby - %d - daje nam: ", poz, liczba, liczba<<poz);

    return 0;
}
