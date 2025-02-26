#include <stdio.h>
#include <stdlib.h>

int liczba, wbw;

int main()
{
    system("chcp 65001");

    scanf("%d", &liczba);

    if(liczba<0) wbw=liczba * -1;
    else wbw=liczba;

    printf("Wartość bezwzgędna z twojej liczby to: %d", wbw);
}
