#include <stdio.h>
#include <stdlib.h>

double subPtrs(double *num1, double const *num2){
    return *num1-*num2;
}

int main()
{
    const double a=10.55;
    double b=2.47;

    printf("%f", subPtrs(&a, &b));

    return 0;
}
