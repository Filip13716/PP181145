#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x;

int main()
{
    system("chcp 65001");

    scanf("%f", &x);

    if(fabs(x)<0.01){
        printf("Pierwiaster sześcienny z twojej liczby to: %f", 1+((1.0/3.0)*x));

        return 0;
    }

    printf("Ta liczba jest za duża dla tego programu! Wpisz ||x|| mniejszy od 0.01.");

    return 1;
}
