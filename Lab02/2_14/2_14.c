#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b;
int C;

int main()
{
    system("chcp 65001");

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%d", &C);

    if(C<10){
        printf("Pole trójkąta: %f", 0.5*a*b*(C*M_PI/180));

        return 0;
    }

    printf("Za duża ten twój kąt dla tego programu!");

    return 1;
}
