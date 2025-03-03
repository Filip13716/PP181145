#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c,delta,x1,x2;

int main()
{
    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    delta=(b*b)-(4*a*c);

    if(delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("X1: %f", x1);
        printf("\nX2: %f", x2);
    }
    else if(delta==0) printf("X0: %f", -b/(2*a));
    else printf("Nie ma rozwi¹zañ.");

    return 0;
}
