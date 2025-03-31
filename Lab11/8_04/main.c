#include <stdio.h>
#include <stdlib.h>

double findMax(double *num1, double const *num2){
    if(*num1 > *num2) return *num1;
    return *num2;
}

int main()
{
    double a=10.5, b=10.6, c=80.65, d=543.1;

    printf("%f\n", findMax(&a, &b));
    printf("%f\n", findMax(&a, &c));
    printf("%f\n", findMax(&d, &b));

    return 0;
}
