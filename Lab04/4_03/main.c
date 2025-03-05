#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int liczba, bit, lbit;

int main()
{
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    printf("Podaj bit: ");
    scanf("%d", &bit);

    lbit = 1<<bit;

    if(liczba&lbit!=lbit){
        printf("Na miejscu %d znajduje sie 0.", bit);
        return 0;
    }

    printf("Na miejscu %d znajduje sie 1", bit);

    return 0;
}
