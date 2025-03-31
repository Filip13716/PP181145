#include <stdio.h>
#include <stdlib.h>

double multPtrs(double *num1, double const *num2){
    return (*num1) * (*num2);
}

int main()
{
    const double a=20.5;
    double b=4.2;

    printf("%f", multPtrs(&a, &b));

    return 0;
}
