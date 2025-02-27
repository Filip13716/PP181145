#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x;

int main()
{
    system("chcp 65001");

    scanf("%f", &x);

    if(fabsf(x)<0.01){
        printf("Wynik: %f", 1+x);

        return 0;
    }

    printf("Za duża liczba x!");

    return 1;
}
