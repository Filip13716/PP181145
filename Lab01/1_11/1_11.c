#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float l1, l2;

int main()
{
    system("chcp 65001");

    scanf("%f", &l1);
    scanf("%f", &l2);

    printf("Przeciwprostokątna ma rozmiar: %f", sqrt(l1*l1+l2*l2));
}
