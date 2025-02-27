#include <stdio.h>
#include <stdlib.h>

float a,b,c,mianownik;

int main()
{
    system("chcp 65001");

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    mianownik=(1/a)+(1/b)+(1/c);

    printf("Wynik: %f", 1/mianownik);

    return 0;
}
