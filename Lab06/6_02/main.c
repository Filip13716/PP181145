#include <stdio.h>
#include <stdlib.h>

int n, suma;

int main()
{
    system("chcp 65001");

    printf("Podaj liczbê: ");
    scanf("%d", &n);

    while(n>0){
        suma+=n;
        n--;
    }

    printf("Suma liczb od 1 do twojej liczby to: %d", suma);

    return 0;
}
