//Wariant 532

#include <stdio.h>
#include <stdlib.h>

double find_max_pointed_numbers(double *a, double const *b){
    if(*a>*b) return *a;
    return *b;
}

int main()
{
    const double a=60.53;
    double b=-99.99999;

    printf("%f", find_max_pointed_numbers(&a, &b));

    return 0;
}
