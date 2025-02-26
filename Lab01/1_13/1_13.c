#include <stdio.h>
#include <stdlib.h>

float liczba, wbw;

int main()
{
    system("chcp 65001");

    scanf("%f", &liczba);

    if(liczba<0) wbw=liczba * -1.0;
    else wbw=liczba;

    printf("Wartość bezwzgędna z twojej liczby to: %f", wbw);
}
